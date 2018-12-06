#include<stdio.h>
#include<stdlib.h>
struct node
{	
	int data;          /* 数据 */
	struct node *next;  /* 指向下一结点的指针 */
};
struct node *create( )   /* 返回值: 链表的首指针 */
{ 
	struct node *p1, *p2, *head;
	int a;
	head = NULL;		/* 空链表 */
	printf("Creating a list...\n");
	printf("Please input a number(if(-1) stop): ");
	scanf("%d", &a);        /* 输入第1个数据 */

	while( a != -1 )       /* 循环输入数据，建立链表 */
	{   	
	  p1 = (struct node *) malloc(sizeof(struct node)); 
	  p1->data = a; /* p1总是指向新开辟结点 */
	  if(head==NULL)     /* ①建立首结点 */
		head= p1;  
	  else                            /* ②处理中间结点 */
		p2->next=p1;
	  p2=p1;   /*p2总是指向当前链表的最后一个结点*/
	  printf("Please input a number(if(-1) stop): ");
	  scanf("%d", &a);     /* 输入下一个数据 */
	}
	if(head != NULL)  p2->next=NULL;   
          /* ③处理尾结点(如果第1次就输入 -1，则此句不做) */
	return(head);            /* 返回创建链表的首指针 */
}
int main()
{
	int n=4;
	create();
 } 
