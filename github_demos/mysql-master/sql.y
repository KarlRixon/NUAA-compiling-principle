%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

#define N 20
bool numberflag=false;
int i=0;
int fieldnum=0;
void yyerror(char *s, ...);
void emit(char *s, ...);
//char *database;

//字段信息
struct tableField {
    char *field;  //字段
    int type;    // 0 int ;1 char
    int length;
    char *value;
    struct tableField *nextfield;
};
//表名
struct createStruct {
    char *table;
    struct tableField * tfield;
};
//运行时存储的数据库和表的相关信息
typedef struct dbs {
    char *dbname;
    struct createStruct *table;
    struct dbs *nextdb;
    }DBS;
DBS *head=NULL;
typedef struct tableContent {
    char *tablename;
    struct tableField *field[10];
}Tables;
Tables *tHead=NULL;
//select struct
struct selectTable {
    char *table;
    struct selectTable *next;
};
struct selectFields {
    char *table;
    char *field;
    struct selectFields *next;
};
struct selectConditions {
    struct selectConditions *left;
    struct selectConditions *right;
    char *comp_op;
    int type;
    char *value;
    char *table;
};
struct selectStruct {
    struct selectTable  *table;
    struct selectFields *fields;
    struct selectConditions *cons;
};

//update insert struct
struct insertStruct {
    char *table;
    struct selectConditions *setop;
};

//delete struct 
struct deleteStruct {
    char *table;
    struct selectConditions *cons;
};

//update sql
struct updateStruct {
    char *table;
    struct selectConditions *set_cons;
    struct selectConditions *find_cons;
};

//functions
bool createdb (char *dbname);
bool createtable(struct createStruct *table);
void showtable();
void showinfo();
void select_results(struct selectStruct *ss); 
void inserttable(struct insertStruct *);
void inserttable1(struct selectConditions *);
void insert(struct tableContent *,int ,struct selectConditions *);
void insertfield(Tables *tc,int i);
void showtablecontent(Tables *tc);
void printf_i(const int i);
//int get_field_i (int *select,struct selectConditions *cons,int flag);
bool is_right (int j,struct selectConditions *cons);
bool search_depend_on_cons( int *select,struct selectConditions *cons,int j);
void print_select_info(int j,struct selectFields* fields,int flag);
void delete_select(struct deleteStruct*);
void free_select_cons_sql(struct selectConditions* tmp); 
void update_select(struct updateStruct *us);
void update (int j,struct selectConditions *cons);
void drop_table();
%}
%union {
        int ival;
        char *sval;

        struct tableField *tf;
        struct createStruct *cs;

        struct selectConditions *sc;
        struct selectFields  *sf;
        struct selectTable *st;
        struct selectStruct  *ss;

        struct insertStruct *is;

        struct deleteStruct *ds;

        struct updateStruct *us;
}
%token <ival> NUMBER
%token <sval> TABLE
%token <sval> CHAR
%token <sval> INT
%token <sval> CREATE
%token <sval> DATABASE
%token <sval> SELECT
%token <sval> FROM
%token <sval> VAR
%token <sval> WHERE
%token <sval> AND
%token <sval> OR
%token <sval> DELETE
%token <sval> USE
%token <sval> DROP
%token <sval> UPDATE
%token <sval> INSERT
%token <sval> SET
%token <sval> INTO
%token <sval> VALUES
%token <sval> SHOW
%token <sval> TABLES

%type <sval> dbs
%type <sval> table
%type <sval> field
%type <sval> comp_left
%type <sval> comp_right
%type <sval> comp_op

%type <cs> create_tables_sql
%type <tf> fieldsdefinition
%type <tf> field_type
%type <tf> type

%type <sval> table_name
%type <tf> fieldtype

%type <ss> select_sql 
%type <sf> select_fields  
%type <sf> fields  
%type <st> tables
%type <sc> select_condition
%type <sc> select_conditions

%type <is>insert_sql
%type <sc>set_opt
%type <sc>find_opt

%type <ds>delete_sql
%type <sc>delete_conditions

%type <us> update_sql
%left OR
%left AND
%start sqls
%%
sqls: sql ';'
| sqls sql ';'
;

sql:  create_database_sql
        {
           if(createdb(yylval.sval))
            printf("create db %s succeed!\n",yylval.sval);
            else
            printf("create db %s failed!\n",yylval.sval);
            printf("sql>");
            //printf("%s",head->dbname);
        }
   |  create_tables_sql 
        {
        if(createtable($1))
            printf("create table %s succeed!\n",$1->table);
        else 
            printf("create table %s failed!\n",$1->table);
 //           showinfo();
            //fieldnum=0;
            printf("sql>");
        //printf("table %s type %d filed %s length %d\n",$1->table,$1->tfield->type,$1->tfield,$1->tfield->length);
        //printf(" type %d filed %s length %d\n",$1->tfield->type,$1->tfield,$1->tfield->length);
        //printf("field %s ",$1->tfield->nextfield);
        }
   |  select_sql 
        {
            select_results($1); 
            printf("sql>"); 
            struct selectConditions *tmp= $1->cons;
            //free($1);
            $1=NULL;
            //free_select_cons_sql(tmp); 
        }
   |  delete_sql 
       {
            delete_select($1);
            printf("delete succeed!\nsql>");
            struct selectConditions *tmp= $1->cons ;
            //free($1);
            $1=NULL;
            //free_select_cons_sql(tmp); 
       
       }
   |  use_database_sql {}
   |  drop_table_sql
   |  drop_database_sql
   |  update_sql  
       {
            update_select($1);
            //printf("update table %s succeed!\nsql>",$1->table);
       }
   |  insert_sql 
       {
       if(i>0)
         insertfield(tHead,i);  //第i次插入,新建field[i]
 
         inserttable1($1->setop);
         printf("insert succeed!\n");
         //printf_i(i);
         i++;
         //insertfield(tHead,i);  //第i次插入,新建field[i]
         //showtablecontent(tHead);
         printf("sql>");


       }
   |  show_table_sql
    
//create database sql
create_database_sql: CREATE DATABASE dbs   {}
dbs: VAR  {
      //  emit("create database %s succeed!",$1);
       // printf("sql>");
        } 
//create tables sql
create_tables_sql:  CREATE TABLE table_name '(' fieldsdefinition ')' 
                 {
                 $$=(struct createStruct*)malloc(sizeof(struct createStruct));
                 $$->table=$3;
                 $$->tfield=$5;
                 //printf("%s",$$->tfield->length);
                 }
table_name: VAR 
          {
          }
fieldsdefinition:field_type 
                 {
                    $$=(struct tableField*)malloc(sizeof(struct tableField));
                    $$=$1;
                    $$->nextfield=NULL;
                 }
                | fieldsdefinition ',' field_type 
                {
                    $$=(struct tableField*)malloc(sizeof(struct tableField));
                    $$=$3;
                    $$->nextfield=$1;
                }
field_type:fieldtype type  
           {
           //fieldnum++;  //字段数量
            //$$->field=(char*)malloc(10*sizeof(char));
            //strcpy($$->field,$1);
           }
fieldtype: VAR
         {
            //printf("aa %s\n",yylval.sval);
            $1=yylval.sval;
         }
type: CHAR '(' NUMBER ')' 
      {
        $$->type=1; 
        $$->length=$3; 
      }
    | INT {$$->type=0;}
//select sql
select_sql: SELECT select_fields FROM tables
          {
             //emit("SELECT %s field FROM %d table", $2, $4);
             $$=(struct selectStruct*)malloc(sizeof(struct selectStruct));
             $$->fields=$2;
             $$->table=$4;
             $$->cons=NULL;
          }
        |  SELECT select_fields FROM tables WHERE select_conditions
        {
             $$=(struct selectStruct*)malloc(sizeof(struct selectStruct));
             $$->fields=$2;
             $$->table=$4;
             $$->cons=$6;
        }
select_fields:fields 
             {
                $$=$1;
             }
             | '*'
             {
                $$->field="*";
             }
fields: field
      {
                $$=(struct selectFields*)malloc(sizeof(struct selectFields));
                $$->field=$1;
      }
        | fields ',' field 
        {
                $$=(struct selectFields*)malloc(sizeof(struct selectFields));
                $$->field=$3;
                $$->next=$1; 
        }
field: VAR {
//        emit("filed %s", $1);
} 
    | table '.' VAR

tables: table 
      {
            $$=(struct selectTable*)malloc(sizeof(struct selectTable));
            $$->table=$1;
      }
      | tables ',' table  
      { 
            $$=(struct selectTable*)malloc(sizeof(struct selectTable));
            $$->table=$3;
            //$$->next=(struct selectTable*)malloc(sizeof(struct selectTable));      
            $$->next=$1;
      }
table: VAR {
        //emit("table %s", $1);
}
select_conditions: select_condition { $$=$1; fieldnum++;}
                 | '(' select_conditions ')' 
                 {
                    $$=$2;
                } 
                 | select_conditions AND select_conditions 
                 {
                    $$=(struct selectConditions*)malloc(sizeof(struct selectConditions));
                    $$->comp_op="a";
                    $$->left=$1;
                    $$->right=$3;
                 }
                 | select_conditions OR select_conditions
                 {
                    $$=(struct selectConditions*)malloc(sizeof(struct selectConditions));
                    $$->comp_op="o";
                    $$->left=$1;
                    $$->right=$3;
                 }
select_condition:comp_left comp_op comp_right
                {
                    $$=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    $$->comp_op=$2;    
                    $$->left=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    $$->left->value=$1;
                    $$->left->left=NULL;
                    $$->right=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    if(numberflag)
                     {
                       char *b=(char*)malloc(sizeof(char)*6);
                       sprintf(b,"%d",$3);
                       $$->right->value=b;
                       numberflag=false;
                       //printf("$3 is %s\n",$3);
                     }
                     else 
                       $$->right->value=$3;
                    $$->right->right=NULL;
                }
comp_left:field
comp_right:field
          |NUMBER  { numberflag=true;}
comp_op: '<' {$$="<";}
       | '>' {$$=">";}
       | '=' {$$="=";}
       | '!''=' {$$="!=";}

//delete sql 
delete_sql: DELETE FROM  table_name
            {
                $$=(struct deleteStruct*)malloc(sizeof(struct deleteStruct)); 
                $$->table=$3;
            }
          | DELETE FROM  table_name WHERE delete_conditions 
            {
                $$=(struct deleteStruct*)malloc(sizeof(struct deleteStruct)); 
                $$->table=$3;
                $$->cons=$5;
            }
delete_conditions:select_conditions 

//choose the databse 
use_database_sql:USE DATABASE dbs {printf("use database succeed\nsql>");}

//drop tabel and drop dbs
drop_table_sql: DROP TABLE table_name 
               {
                    int j;
                    //free(tHead->tablename);
                    /*
                    for( j=0;j<i;++j)
                      {
                       //free(tHead->field[j]);
                       tHead->field[j]=NULL;
                      }
                      tHead=NULL;
                      printf("drop table %s succeed!\nsql>",$3);
                      */
                      drop_table();
                      printf("drop table %s succeed!\nsql>",$3);
               }
drop_database_sql:DROP DATABASE dbs 
                 {
                   free(head);
                   head=NULL;
                   //free(tHead->tablename);
                   drop_table();
                   printf("drop database %s succeed!\nsql>",$3);
                 } 

//update sql
update_sql:UPDATE table_name SET set_opt WHERE find_opt
          {
            $$=(struct updateStruct*)malloc(sizeof(struct updateStruct));
            $$->table=$2;
            $$->set_cons=$4;
            $$->find_cons=$6;
          }
set_opt:select_conditions 
find_opt:select_conditions

//insert sql
insert_sql:INSERT INTO table_name SET set_opt              
          {
                //if(tHead->field[0]->value && i >0) printf("field is %s\n",tHead->field[0]->value);
               $$=(struct insertStruct*)malloc(sizeof(struct insertStruct));
               $$->table=$3;
               $$->setop=$5;
          }

//show table sql
show_table_sql: SHOW TABLES
              {
                showtable();
              }
%%
void yyerror(char *s, ...)
{
        extern yylineno;

        va_list ap;
        va_start(ap, s);

        fprintf(stderr, "line %d, error: ", yylineno);
        vfprintf(stderr, s, ap);
        fprintf(stderr, "\n");
}
void emit(char *s, ...)
{
        extern yylineno;

        va_list ap;
        va_start(ap, s);

        fprintf(stdout, "line %d, sql_parse: ", yylineno);
        vfprintf(stdout, s, ap);
        fprintf(stdout, "\n");
}

bool createdb(char *dbname)
{
    head=(DBS*)malloc(sizeof(DBS));
    if( NULL == head )
    return false;
    else 
    {
        head->dbname=dbname;
        return true;
    }
}
bool createtable(struct createStruct *table)
{
    if(head!=NULL)
    {
      head->table=table;
      tHead=(struct tableContent*)malloc(sizeof(struct tableContent));
      tHead->tablename=table->table;
      //tHead->field[i]=(struct tableField*)malloc(sizeof(struct tableField));
      tHead->field[i]=table->tfield;
      tHead->field[i]->value=NULL;
      /*
      while(table->tfield)
       {
       printf("a %s\n",table->tfield);
       table->tfield=table->tfield->nextfield;
       }
       */
      //printf("test %s\n",tHead->field[i]->nextfield->nextfield);
      //printf("%s\n",table->table->type);
      //printf("table %s type %d filed %s length %d\n",table->table,table->tfield->type,table->tfield,table->tfield->length);
      /*
      while(tHead->field[i])
     {
     printf("table %s type %d filed %s length %d\n",head->table->table,tHead->field[i]->type,tHead->field[i],tHead->field[i]->length);
     tHead->field[i]=tHead->field[i]->nextfield;
     }
     */
      return true;
    }
    else
    {
      printf("please create db first\n");
      return false;
    }
 showinfo();
}
void showinfo()
{
    printf("dbname is %s,",head->dbname);
    printf("tablename is %s,",head->table->table);
 /*
 printf("dbname is %s,",head->dbname);
    printf("dbname is %s,",head->dbname);
    printf("dbname is %s,",head->dbname);
    */
    }


void showtable()
{
    printf("table in db %s\n",head->dbname);
    printf("%s\nsql>",head->table->table);
}

/// @name 输出查找结果
/// @{ 首先判断是否有条件,在select中根据条件将相应的field[i]的i记录,
///    接下来根据select数组中的记录,通过field查询,若select没有记录,则没有条件,全部查询
///  @} 
/*
*
* ss->cons  ss->field需要free
*/
void select_results(struct selectStruct *ss) 
{
    int select[N];
    memset(select,0,sizeof(select));
    /*
    printf("%s\n",ss->table->table);
    while(ss->fields)
    {
    printf("%s\n",ss->fields->field);
    ss->fields=ss->fields->next; 
    }
    */
    if(!tHead)
      {
        printf("no info\n");
        return ;
      }
    if(ss->cons)    //如果有条件,选出符合条件的信息
     {
     int j;
       for( j=0;j<i;++j)  //对每条信息进行处理
        search_depend_on_cons(select,ss->cons,j);
     }
    int j=0;
        struct  selectFields *tmp=ss->fields;
        if(strcmp(tmp->field,"*")!=0)   //按字段打印信息
          {
            while(tmp)
              {
                printf("%s   ",tmp->field);
                tmp=tmp->next;
              }
            printf("\n");
           if(ss->cons)      //有条件
           {
             for(j=0;j<i;j++)
               if(select[j]) 
                {
                  print_select_info(j,ss->fields,0);
                  printf("\n");
                }
           }
           else              //无条件
           {
             for(j=0;j<i;++j)
                {
                  print_select_info(j,ss->fields,0);
                  printf("\n");
                }
           
           }
         }
        else //全部输出 *
        {
          for(j=0;j<i;j++)
          {
            struct tableField *tmp=tHead->field[j] ;
            int flag=0;
            while(tmp)
            {
              printf("%s  ",tmp);
              tmp=tmp->nextfield;
              flag=1;
            }
            if(flag) break;
          }
            printf("\n");
          if(ss->cons)           //有where语句条件,按条件输出
          {
  //        printf("有条件\n");
            for(j=0;j<i;j++)
              if(select[j])
                {
                  print_select_info(j,ss->fields,1);
                  printf("\n");
                }
          }
          else                   //没有where 语句
          {
   //       printf("无条件\n");
             for (j=0; j<i; ++j)
             {
             print_select_info(j,ss->fields,1);
                  printf("\n");
             }
             
          }
       }
}


/// @name 根据条件查询,设置select[i],i表示结果需要输出的tHead->field[i]
/// @{ 
///  @} 
bool search_depend_on_cons( int *select,struct selectConditions *cons,int j)
{
    bool yes=false;
    if(strcmp(cons->comp_op,"a")!=0 && strcmp(cons->comp_op,"o")!=0)
      {
        yes=is_right(j,cons); //查看是否此条信息满足要求
        select[j]=yes ? 1 : 0 ;//judge yes
        return yes;

      }
    else if(strcmp(cons->comp_op,"o")==0)
      {
        bool a=search_depend_on_cons(select,cons->left,j);
        bool b=search_depend_on_cons(select,cons->right,j);
        if(a || b)
           select[j]=1;
      }
    else if(strcmp(cons->comp_op,"a")==0)
     {
        bool a=search_depend_on_cons(select,cons->right,j);
        bool b=search_depend_on_cons(select,cons->left,j);
        if(a && b)
        {
            yes=true;
        }
            select[j]= yes ? 1 : 0;//judge yes
     }
}

/// @name 查找,返回field[i] 的i
/// @{ 
///  @} 
bool is_right (int j,struct selectConditions *cons)
{
       struct tableField *tmp=tHead->field[j] ;
       while(tmp)
         {
            if((strcmp(tmp,cons->left->value)==0) ) //找到要查询的字段,判断字段内容是否满足
              {
                      if(tmp->value  ) 
                       {
                           if(strcmp(cons->comp_op,"=")==0)//条件是"="
                           {
                             if(strcmp(tmp->value,cons->right->value)==0) 
                               return true ;
                              else 
                               return false;
                           }
                           else if(strcmp(cons->comp_op,"!=")==0)//条件是"!="
                           {
                             if(strcmp(tmp->value,cons->right->value)!=0) 
                               return true ;
                              else 
                               return false;
                           }
                           //*
                           //如果以上两种情况没有出现,说明是< 或 > ,那么肯定是int,否则错
                           else if(tmp->type==0)//判断 type是否为int,type=0
                           {
                             int tablevalue=atoi(tmp->value);
                             int selectvalue=atoi(cons->right->value);
                             if(strcmp(cons->comp_op,">")==0)   // " > "
                             {
                                if(tablevalue > selectvalue) 
                                return true;
                                else
                                return false;

                             }
                             else if(strcmp(cons->comp_op,"<")==0) //" < "
                             {
                             
                                if(tablevalue < selectvalue) 
                                return true;
                                else
                                return false;
                             }
                             else
                                return false;
                           }
                           else 
                            return false;
                       }
                       else return false;

             }
            tmp=tmp->nextfield;
            if(!tmp) return false;
         }

}


/// @name 
/// @{ 根据给出的i和输出的字段,输出相应字段的内容
///  @} 
void print_select_info(int j,struct selectFields* fields,int flag)
{
   //struct selectFields *stmp=fields;
     //int flag=1;
   if(!flag)                      //按照字段打印
     while(fields)
      { 
        struct tableField *tmp=tHead->field[j];
        while(tmp)
           {
             if(strcmp(tmp,fields->field)==0)
             {
         //       flag=0; //说明 selectfield存在,
                if(tmp->value)
                {
                    printf("%s  ",tmp->value);
                }
                else
                    printf("null  ");
            }
             tmp=tmp->nextfield;
           }
        //   if(!flag) flag=1;
        fields=fields->next; 
      } 
   else                    //字段为*
    {
        struct tableField *tmp=tHead->field[j];
        while(tmp)
        {
        if(tmp->value)
          printf("%s ",tmp->value);
        else
          printf("null  ");
          tmp=tmp->nextfield;
        }

    }
 //     if(flag) printf("无");
}


/// @name 这个函数没用了
/// @{  inserttable1 代替 
///  @} 
void inserttable(struct insertStruct *tableinfo)
{
    if(i>0)
      insertfield(tHead,i);  //第i次插入,新建field[i]
   if(strcmp(tHead->tablename,tableinfo->table)==0)  //插入表名正确 寻找字段,插入信息
    {
    struct selectConditions *left,*right,*comp_op;
    comp_op=tableinfo->setop;
    int j=0;
        for(j=0;j<fieldnum;++j)
          {
            if(( strcmp(comp_op->comp_op,"=")==0 ) && ( j==0 ) ) // 一个field设置值
               { 
                  //printf("yes\n"); 
                 insert(tHead,i,comp_op);
               //找到field,赋值
               }
            if((strcmp(comp_op->comp_op,"a")==0) && (j==0)) //有多个field
              {
                left=comp_op->left; 
                right=comp_op->right; 
              }
              //判断left和right
              if(j>0)
              {
                if((strcmp(left->comp_op,"a")==0) && left!=NULL)
                   left=left->left;                 
                else if(strcmp(left->comp_op,"=")==0)
                {
                  printf("left\n"); 
                 insert(tHead,i,left);
                  left=NULL;
                }
                if((strcmp(right->comp_op,"a")==0) && right!=NULL)
                   right=right->right;                 
                else if(strcmp(right->comp_op,"=")==0)
                {
                  printf("right\n"); 
                 insert(tHead,i,right);
                  right=NULL;
                }


              }
          }
          ++i;

    }
    else printf("tablename wrong\nsql>");
}
void inserttable1(struct selectConditions *cons)
{
  if(!tHead) return ;
/*
printf("%s\n",cons->comp_op);
printf("%s\n",cons->left->comp_op);
printf("%s\n",cons->right->comp_op);
*/
  if(strcmp(cons->comp_op,"=")==0) 
  {
    //printf("addr %x\n",cons->right->value);
    //printf("insert field %s value %s\n",cons->left->value,cons->right->value);
    insert(tHead,i,cons);
    //printf("insert succeed\n");
  }
  else if(strcmp(cons->comp_op,"a")==0)
  {
   // cons=cons->left;
    inserttable1(cons->left);
   // cons=cons->right;
    inserttable1(cons->right);
    }
    //free(cons);
}
void insert( struct tableContent  *tc,int i,struct selectConditions *cons)
{

//找到相应字段,插入信息,判断 type和length,目前还没判断
    struct tableField *tftmp=tc->field[i];
   // printf("table %s type %d filed %s,%s length %d\n",tHead->tablename,tHead->field[i]->type,tHead->field[i],tHead->field[i]->nextfield,tHead->field[i]->length);
    while(tftmp!=NULL)
    {
       if(strcmp(tftmp,cons->left->value)==0) //get it
         {
         if(tftmp->type==1)  //char type
            if(strlen(cons->right->value) > tftmp->length)
               {
                 printf("value %s is too long\n",cons->right->value);
                 exit(0);
               }
          tftmp->value=cons->right->value;
          //printf("get its value\n");
          //printf("field is tf %s value is %s\n",tftmp,cons->right->value);
          //free(cons->left);
         // free(cons->right);
          //printf("field is %s\n",tftmp);
          //sleep(2);
          }
          tftmp=tftmp->nextfield;
     //   printf("%s\n",tctmp->field[i]);
          //printf("get its value\n");
    }
    //free(cons);
}
/// @name insertfield
/// @{ 每次插入新内容,构造field[i]
///  @} 
void insertfield(Tables *tc,int i)
{
//printf("i is %d\n",i);
  //Tables * tmp=tc;
  if(!tHead) return ;
  struct tableField *p,*q;
  struct tableField *f=tc->field[0];
  tc->field[i]=(struct tableField*)malloc(sizeof(struct tableField));
  q=tc->field[i];
  q->field=f->field;
  q->type=f->type;
  q->length=f->length;
  q->value=NULL;
  f=f->nextfield;
  while(f)
  {
   p=(struct tableField*)malloc(sizeof(struct tableField));    
   p->field=f->field;
   p->type=f->type;
   p->length=f->length;
   p->value=NULL;
   //赋值
   q->nextfield=p;
   q=p;
    f=f->nextfield;
  }
  q->nextfield=NULL;
//printf("type is %d\n",tc->field[i]->type);
   //if(tHead->field[0]->value) printf("yes\n\n\n");
}
void printf_i(const int i)
{
  printf("current i is %d\n",i);
}
void showtablecontent(Tables *tc)
{
  //Tables *tmp=tc;
  struct tableField *f;
  printf("table name is %s\n",tc->tablename);
  int j=0;
  //printf("i is %d\n",i);
  for(j=0;j<i;++j)
   {
    f=tc->field[j];
    printf("j is %d\n",j);
    while(f!=NULL)
     {
        if(f->value )
        {
          printf("field  %s,",f);
          printf("value  %s,",f->value);
          printf("type %d,",f->type);
          printf("length %d\n",f->length);
        }
        f=f->nextfield;
        //printf("field 0 is field is %s,value %s type %d length %s\n",tc->field[0],tc->field[0]->value,tc->field[0]->type,tc->field[0]->length);
     }
     //free(f);
   }
  //struct tableField *f=tc->field[i];
    //    printf("field is %s,value %s type %d length %s\n",f,f->value,f->type,f->length);
}

/// @name 删除所选表或信息
/// @{  此时需要free 
///  @} 
void delete_select(struct deleteStruct* ds)
{
    if(!ds->cons)   //delete from table 没有where条件
      {
 //       free(tHead);        //每个malloc都要删除
            //free(tHead->tablename);
            int j=0;
            struct tableField *tmp=NULL;
            for(j=0;j<i;j++)
            {
                tmp=tHead->field[j];
            while(tHead->field[j])
            {
                tmp=tHead->field[j]->nextfield;
                //free(tHead->field[j]->field);
                free(tHead->field[j]->value);
                tHead->field[j]=tmp;
            }
            }
            tHead=NULL;
        printf("delete \n");
      }
    else           // where 
      {
      int select[N];
      int j;
      memset(select,0,sizeof(select));
      if(ds->cons)    //如果有条件,选出符合条件的信息
       {
         for( j=0;j<i;++j)  //对每条信息进行处理
          search_depend_on_cons(select,ds->cons,j);
       }
      for(j=0;j<i;j++)
       if(select[j])
       {
            struct tableField *tmp=tHead->field[j];
            //tHead->field[j]=NULL;  // free
            while(tHead->field[j])
            {
                tmp=tHead->field[j]->nextfield;
                free(tHead->field[j]);
                free(tHead->field[j]->value);
                tHead->field[j]=tmp;
            }
      }
      }
}


/// @name 释放内存
/// @{ 
///  @} 
void free_select_cons_sql(struct selectConditions* tmp) 
{
   if(!tmp) return;
   if(strcmp(tmp->comp_op,"a")!=0 && strcmp(tmp->comp_op,"o")!=0)
   {
         free(tmp->left);
         tmp->left=NULL;
         free(tmp->right);
         tmp->right=NULL;
         free(tmp);
         tmp=NULL;
   //printf("yes\n");
   }
   else 
   {
   free_select_cons_sql(tmp->left);
   free_select_cons_sql(tmp->right);
   }

}


//
void update_select(struct updateStruct *us)
{
    int select[N];
    int j;
    memset(select,0,sizeof(select));
    if(!tHead) 
    {
        printf("update error! no info!\n");
        return ;
    }
    for( j=0;j<i;++j)  //找到要update的field[i]
    {
        search_depend_on_cons(select,us->find_cons,j);
        if(select[j])
        {
        //printf("%d\n",j);
            update (j,us->set_cons);
        }
    }
}
void update (int j,struct selectConditions *cons)
{
    if(cons)
    {
        if(strcmp(cons->comp_op,"=")==0)  
            {
            struct tableField *tmp=tHead->field[j];
            while(tmp)
            {
                if(strcmp(tmp,cons->left->value)==0)
                    tmp->value=cons->right->value;
                tmp=tmp->nextfield;
            }
            return;
            }
        else 
            {
                update(j,cons->left);
                update(j,cons->right);
            
            }
    }
    else 
    {
        printf("update failed!\nsql>");
        return ;
    }
}
void drop_table ()
{
    struct tableField *tmp;
    free(tHead->tablename);
    int j;
    for( j=0; j< i;++j)
    {
        while(tHead->field[j])
        {
            tmp=tHead->field[j]->nextfield;
        //    free(tHead->field[j]);
            free(tHead->field[j]->value);
            tHead->field[j]=tmp;
        }
    }
}
