#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

typedef struct goods{		//商品 
	int shopnum;
	char goodname[21];
	float price;
	int sales;
	goods *next;
}goods;
typedef struct shop{		//商铺 
	int shopnum;
	char shopname[21];
	float creditworthiness;
	goods *goodhead;
	shop *next; 
}shop;
typedef struct qgoods{		//查询结果 
	int shopnum;
	char goodname[21];
	float price;
	int sales;
	qgoods *prior;
	qgoods *next;
}qgoods;

void createhead(shop* &head){
	head=(shop*)malloc(sizeof(shop));
	head->creditworthiness=0;
	head->goodhead=(goods*)malloc(sizeof(goods));		//不想让头结点特殊化所以加了goodhead 
	head->goodhead->price=0;
	head->goodhead->sales=0;
	head->goodhead->next=NULL;
	head->shopnum=0;
	head->next=NULL;
}
void init(shop *head){		//从文件中读取数据到链表
	fstream infile1,infile2;
	infile1.open("shop.dat",ios::in|ios::binary);
	if(!infile1){
		cout<<"file not exists"<<endl;
		infile1.close();
		infile1.open("shop.dat",ios::out|ios::binary);
	}
	infile2.open("goods.dat",ios::in|ios::binary);
	if(!infile2){
		cout<<"file not exists"<<endl;
		infile2.close();
		infile2.open("goods.dat",ios::out|ios::binary);
	}
	shop *ps=NULL,*p=NULL;
	goods *pg=NULL;
	while(!infile1.eof()){
		//读取一个商铺 
		ps=(shop*)malloc(sizeof(shop));
		infile1.read((char*)ps,sizeof(shop));
		ps->goodhead=(goods*)malloc(sizeof(goods));
		ps->goodhead->next=NULL;
		ps->next=NULL;								//忘记加NULL害死人！！！！！ 
		if(ps->shopnum<0||ps->shopnum>2000){
			free(ps);
			break;
		}
		//给商铺添加商品
		while(!infile2.eof()){
			goods *g=NULL;
			if(pg!=NULL&&pg->shopnum<ps->shopnum)continue;
			if(pg!=NULL&&pg->shopnum==ps->shopnum){
				for(g=ps->goodhead;g->next!=NULL;g=g->next);
//				pg->next=NULL;
				g->next=pg;
			}
			pg=(goods*)malloc(sizeof(goods));
			infile2.read((char*)pg,sizeof(goods));
			pg->next=NULL;
			if(pg->shopnum<0||pg->shopnum>2000){
				free(pg);
				break;
			}
			if(pg->shopnum>ps->shopnum)break;
			if(pg->shopnum==ps->shopnum){
				for(g=ps->goodhead;g->next!=NULL;g=g->next);
//				pg->next=NULL;
				g->next=pg;
				pg=NULL;
			}
		}
		if(ps->shopnum==0)break;
		if(ps->shopnum==1){		//第一个商铺需特殊处理，不然重新读取文件会导致链表重复 
			head->next=ps;
		}
		else{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=ps;
		} 
	}
	infile1.close();
	infile2.close();
	return;
}
int searchshopname(shop *head,char *name){
	if(head->next==NULL)return 0;
	shop *p=head->next;
	for(;p!=NULL;p=p->next)
		if(strcmp(p->shopname,name)==0)return 1; 
	return 0;
}
int searchgoodname(shop *shop,char *goodname){
	if(shop->goodhead->next==NULL)return 0;
	goods *pg=shop->goodhead->next;
	for(;pg!=NULL;pg=pg->next)
		if(strcmp(pg->goodname,goodname)==0)return 1;
	return 0;
}
void refreshfile(shop *head){
	fstream outfile1,outfile2;
	outfile1.open("shop.dat",ios::out|ios::binary);
	if(!outfile1){
		cout<<"file with error"<<endl;
		exit(0);
	}
	outfile2.open("goods.dat",ios::out|ios::binary);
	if(!outfile2){
		cout<<"file with error"<<endl;
		exit(0);
	}
//	if(head->next==NULL){
//		cout<<"没有信息可存"<<endl;
//		outfile1.close();
//		outfile2.close();
//		return;
//	}
	shop *p=head->next;
	goods *pg=NULL;
	for(;p!=NULL;p=p->next){
		outfile1.write((char*)p,sizeof(shop));
		if(p->goodhead->next!=NULL){
			pg=p->goodhead->next;
			for(;pg!=NULL;pg=pg->next){
				outfile2.write((char*)pg,sizeof(goods));
			}
		}
	}
	outfile1.close();
	outfile2.close();
	cout<<"文件刷新成功"<<endl;
	return;
}
void addshop(shop *head){
	int flag=0;
	shop *pn=NULL,*p=NULL;
	goods *png=NULL,*pg=NULL;
	pn=(shop*)malloc(sizeof(shop));
	pn->goodhead=(goods*)malloc(sizeof(goods));
	pn->goodhead->shopnum=0;
	pn->goodhead->price=0;
	pn->goodhead->sales=0;
	pn->goodhead->next=NULL;
	pn->next=NULL;
	//商铺信息 
	pn->creditworthiness=5;
	while(1){
		cout<<"输入商铺名：";
		if(flag==0){			//根据flag清况使用cin.ignore 
			cin.ignore();
		}
		flag=0;
		cin.getline(pn->shopname,20);
		if(searchshopname(head,pn->shopname)){
			cout<<"商铺名已存在"<<endl;
			flag=1;
			continue;
		}
		else break;
	}
	//添加到链表
	int i=0;
	if(head->next==NULL){		//添加第一个商铺 
		pn->shopnum=1;
		i=1;
		head->next=pn;
	}
	else {
		for(p=head->next,i=p->shopnum;p->next!=NULL;p=p->next);
		i=p->shopnum;
		pn->shopnum=++i;
		p->next=pn;
	}
	//商品信息
	while(1){
		png=(goods*)malloc(sizeof(goods));
		png->next=NULL;
		png->shopnum=i;
		cout<<"输入商品名称(输入0结束输入)：";
//		cin.ignore();
		cin.getline(png->goodname,20);
		if(searchgoodname(pn,png->goodname)){
			cout<<"此商铺已有该商品"<<endl;
			free(png);
			continue;
		}
		if(strcmp(png->goodname,"0")==0){
			free(png);
			break;
		}
		while(1){
			cout<<"输入商品单价：";
			cin>>png->price;
			cin.ignore();
			if(png->price<0){
				cout<<"输入错误"<<endl;
				continue;
			}
			else break;
		}
		png->sales=0;
		//添加商品
		if(pn->goodhead->next==NULL){		//添加第一个商品 
			pn->goodhead->next=png;
		}
		else {
			for(pg=pn->goodhead->next;pg->next!=NULL;pg=pg->next);
			pg->next=png;
		}
	}
	refreshfile(head);
	return;
}
void deleteshop(shop *head){
	int n=0,i=0,flag=0;
	shop *ps=NULL;
	goods *pg=NULL;
	cout<<"输入商铺编号：";
	cin>>n;
	for(ps=head;ps->next!=NULL;ps=ps->next){
		if(ps->next->shopnum==n){
			i=ps->next->shopnum;
			ps->next=ps->next->next;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"无该商铺"<<endl;
		return;
	}
	else{
		for(ps=ps->next;ps!=NULL;ps=ps->next,++i){
			ps->shopnum=i;
			pg=ps->goodhead;
			for(;pg!=NULL;pg=pg->next){
				pg->shopnum=i;
			}
		}
	}
	refreshfile(head);
	return;
}
void addgood(shop *head){
	int n=0,flag=0;
	cout<<"输入商铺编号：";
	cin>>n;cin.ignore();
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag=1;
			while(1){
				goods *png=(goods*)malloc(sizeof(goods));
				png->next=NULL;
				png->shopnum=ps->shopnum; 
				cout<<"输入商品名称（输入0结束）：";
				cin.getline(png->goodname,20);
				if(searchgoodname(ps,png->goodname)){
					cout<<"此商铺已有该商品"<<endl;
					free(png);
					continue;
				}
				if(strcmp(png->goodname,"0")==0){
					free(png);
					break;
				}
				while(1){
					cout<<"输入商品单价：";
					cin>>png->price;
					cin.ignore();
					if(png->price<0){
						cout<<"输入错误"<<endl;
						continue;
					}
					else break;
				}
				png->sales=0;
				//添加商品
				if(ps->goodhead->next==NULL){		//添加第一个商品 
					ps->goodhead->next=png;
				}
				else {
					goods *pg=NULL;
					for(pg=ps->goodhead->next;pg->next!=NULL;pg=pg->next);
					pg->next=png;
					cout<<"添加成功"<<endl; 
				}
			}
		}
	}
	if(flag==0){
		cout<<"没有此商铺"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void deletegood(shop *head){
	int n=0,flag1=0,flag2=0;
	char goodname[21];
	cout<<"输入商铺编号：";
	cin>>n;cin.ignore();
	cout<<"输入商品名称（输入0结束）：";
	cin.getline(goodname,20);
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag1=1;
			for(goods *pg=ps->goodhead;pg->next!=NULL;pg=pg->next){
				if(strcmp(pg->next->goodname,goodname)==0){
					flag2=1;
					pg->next=pg->next->next;
					cout<<"删除成功"<<endl;
				}
			}
		}
	}
	if(flag1==0){
		cout<<"没有此商铺"<<endl;
		return;
	}
	if(flag2==0){
		cout<<"没有此商品"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void purchase(shop *head){
	int n=0,flag1=0,flag2=0,s=0;
	char goodname[21];
	cout<<"输入商铺编号：";
	cin>>n;cin.ignore();
	cout<<"输入商品名称（输入0结束）：";
	cin.getline(goodname,20);
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag1=1;
			for(goods *pg=ps->goodhead;pg->next!=NULL;pg=pg->next){
				if(strcmp(pg->next->goodname,goodname)==0){
					flag2=1;
					cout<<"输入购买数量：";
					cin>>s; 
					pg->next->sales+=s;
				}
			}
		}
	}
	if(flag1==0){
		cout<<"没有此商铺"<<endl;
		return;
	}
	if(flag2==0){
		cout<<"没有此商品"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void addquerybysaleorder(qgoods *qhead,goods *pg){
	qgoods *qn=NULL,*q=NULL;
	q=qhead;
	qn=(qgoods*)malloc(sizeof(qgoods));
	qn->next=NULL;
	qn->price=pg->price;
	qn->prior=NULL;
	qn->sales=pg->sales;
	qn->shopnum=pg->shopnum;
	strcpy(qn->goodname,pg->goodname);
	if(q->next==NULL){
		q->next=qn;
		q->prior=qn;
		qn->prior=q;
		qn->next=q;
		return;
	}
	else{
		for(q=qhead->next;q!=qhead;q=q->next){
			if(q->sales<qn->sales){
				qn->prior=q->prior;
				q->prior->next=qn;
				qn->next=q;
				q->prior=qn;
				break;
			}
			if(q->next==qhead&&q->sales>=qn->sales){
				q->next=qn;
				qn->prior=q;
				qhead->prior=qn;
				qn->next=qhead;
				break;
			}
		}
	}
}
void showquery(qgoods *qhead,shop *head){
	qgoods *q=NULL;
	shop *ps=NULL;
	for(q=qhead->next;q!=qhead;q=q->next){
		cout<<"-----------------------------------"<<endl;
		cout<<"\t商品销量："<<q->sales<<endl;
		cout<<"\t商品名称："<<q->goodname<<endl;
		cout<<"\t商品价格："<<q->price<<endl;
		cout<<"\t商铺信息："<<endl;
		cout<<"\t\t商铺编号："<<q->shopnum<<endl;
		for(ps=head->next;ps!=NULL;ps=ps->next){
			if(ps->shopnum==q->shopnum){
				cout<<"\t\t商铺名称："<<ps->shopname<<endl;
				cout<<"\t\t商铺信誉度："<<ps->creditworthiness<<endl;
				cout<<"\t\t-------------------"<<endl;
				break;
			}
		}
		cout<<"-----------------------------------"<<endl;
	}
}
void goodquery(shop *head){
	int flag=0;
	char goodname[21];
	qgoods *qn=NULL,*q=NULL;
	qgoods *qhead=(qgoods*)malloc(sizeof(qgoods));
	qhead->next=NULL;
	qhead->price=0;
	qhead->prior=NULL;
	qhead->sales=0;
	qhead->shopnum=0;
	cout<<"输入商品名称：";
	cin.ignore();
	cin.getline(goodname,20);
	for(shop *ps=head->next;ps!=NULL;ps=ps->next){
		for(goods *pg=ps->goodhead->next;pg!=NULL;pg=pg->next){
			if(strcmp(pg->goodname,goodname)==0){
				flag=1;
				addquerybysaleorder(qhead,pg);
			}
		}
	}
	if(flag==0){
		cout<<"没有查找到此商品"<<endl;
	}
	showquery(qhead,head);
}
void show(shop *head){
	shop *p=head->next;
	goods *pg=NULL;
	for(;p!=NULL;p=p->next){
		cout<<"-----------------------------------"<<endl;
		cout<<"\t商铺编号：\t"<<p->shopnum<<endl;
		cout<<"\t商铺名：\t"<<p->shopname<<endl;
		cout<<"\t信誉度：\t"<<p->creditworthiness<<endl;
		cout<<"\t商品列表："<<endl;
		for(pg=p->goodhead->next;pg!=NULL;pg=pg->next){
			cout<<"\t\t商品名称："<<pg->goodname<<endl;
			cout<<"\t\t商品单价："<<pg->price<<endl;
			cout<<"\t\t商品销量："<<pg->sales<<endl;
			cout<<"\t\t-------------------"<<endl;
		}
		cout<<"-----------------------------------"<<endl;
	}
	return;
}


int main(){
	int n=0;
	shop *head=NULL;
	createhead(head);
	init(head);
	while(1){
		cout<<"menu"<<endl;
		cout<<"----1.添加一个商铺"<<endl;
		cout<<"----2.删除一个商铺"<<endl;
		cout<<"----3.增加商铺中的商品"<<endl;
		cout<<"----4.删除商铺中的商品"<<endl;
		cout<<"----5.查询商品"<<endl;
		cout<<"----6.购买商品"<<endl;
		cout<<"----7.刷新文件信息"<<endl;
		cout<<"----8.重新读取文件"<<endl;
		cout<<"----9.显示全部信息"<<endl;
		cout<<"----10.清屏"<<endl;
		cout<<"----11.退出程序"<<endl;
		cin>>n;
		switch(n){
			case 1:addshop(head);break;
			case 2:deleteshop(head);break;
			case 3:addgood(head);break;
			case 4:deletegood(head);break;
			case 5:goodquery(head);break;
			case 6:purchase(head);break;
			case 7:refreshfile(head);break;
			case 8:init(head);break;
			case 9:show(head);break;
			case 10:system("cls");break;
			case 11:refreshfile(head);return 0;
		}
	} 
}
