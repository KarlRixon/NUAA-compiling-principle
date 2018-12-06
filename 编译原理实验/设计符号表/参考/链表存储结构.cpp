#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define INIT_SIZE 10
#define INCREMENT 10
using namespace std;

typedef struct list{
	int a;
	list *next; 
}list;
int count=0;

list *createlist(list *p){
	list *q,*pn;
	int t=0;
	p=(list*)malloc(sizeof(list));
	p->a=0;
	p->next=NULL;
	q=p;
	for(int i=0;;i++){
		pn=(list*)malloc(sizeof(list));
		cout<<"输入第"<<i<<"个元素值：";
		cin>>t;
		if(t!=0){
			pn->a=t;
			pn->next=NULL;
			q->next=pn;
			q=q->next;
			count++;
		}else break;
	}
	return p;
}
void show(list *p){
	list *q=NULL;q=p;
	cout<<"链表为：";
	for(int i=0;;i++){
		q=q->next;
		if(q!=NULL)cout<<q->a<<"\t";
		else break;
	}
	cout<<endl;
}
void listempty(list *p){
	if(p==NULL)cout<<"链表不存在"<<endl;
	else if(p->next==NULL)cout<<"链表为空"<<endl; 
	else cout<<"链表不为空"<<endl;
}
list *clearlist(list *p){
	if(p==NULL)cout<<"链表不存在"<<endl;
	else if(p->next==NULL)cout<<"链表为空"<<endl; 
	else{
		free(p->next);
		p->next=NULL;
		return p;
	}
}
list *destroylist(list *p){
	if(p==NULL)cout<<"链表不存在"<<endl;
	else if(p->next==NULL)cout<<"链表为空"<<endl; 
	else{
		free(p);
		p=NULL;
		return p;
	}
}
void getlistsize(list *p){
	cout<<"元素个数为"<<count;
}
void getelem(list *p){
	cout<<"你想获取第几个元素：";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<1||n>count){
		cout<<"输入错误"<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		q=q->next;
		if(p==NULL){
			cout<<"输入错误"<<endl;
			return;
		}
	}
	cout<<"第"<<n<<"个元素值为："<<q->a<<endl;
}
void priorelem(list *p){
	cout<<"你想获取第几个元素的前驱：";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<2||n>count){
		cout<<"输入错误"<<endl;
		return;
	}
	for(int i=0;i<n-1;i++){
		q=q->next;
		if(q==NULL){
			cout<<"输入错误"<<endl;
			return;
		}
	}
	cout<<"第"<<n<<"个元素前驱值为："<<q->a<<endl;
}
void nextelem(list *p){
	cout<<"你想获取第几个元素的后继：";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<1||n>count-1){
		cout<<"输入错误"<<endl;
		return;
	}
	for(int i=0;i<n+1;i++){
		q=q->next;
		if(q==NULL){
			cout<<"输入错误"<<endl;
			return;
		}
	}
	cout<<"第"<<n<<"个元素后继值为："<<q->a<<endl;
}
list *insertelem(list *p){
	list *q,*pn;
	q=pn=NULL;
	q=p;
	int n=0,num=0;
	cout<<"在第几号元素后插入：";
	cin>>n;
	if(n<1||n>count){
		cout<<"输入错误"<<endl;
		return p;
	}
	cout<<"输入插入值：";
	cin>>num;
	if(num==0){
		cout<<"输入不能为0"<<endl;
		return p;
	}
	for(int i=0;i<n;i++){
		q=q->next;
//		if(q==NULL){
//			cout<<"输入错误"<<endl;
//			return p;
//		}
	}
	pn=(list *)malloc(sizeof(list));
	pn->a=num;
	pn->next=NULL;
	pn->next=q->next;
	q->next=pn;
	return p;
}
list *deleteelem(list *p){
	list *q,*qq;
	q=qq=NULL;
	q=p;
	int n=0,num=0;
	cout<<"删除第几号元素：";
	cin>>n;
	if(n<1||n>count){
		cout<<"输入错误"<<endl;
		return p;
	}
	for(int i=0;i<n-1;i++){
		q=q->next;
//		if(q==NULL){
//			cout<<"输入错误"<<endl;
//			return p;
//		}
	}
	qq==q->next;
	q->next=q->next->next;
	free(qq);
	return p;
}

int main(){
	int n=0;
	list *p;		//头结点 
	p=NULL;
	while(1){
		cout<<"功能"<<endl;
		cout<<"----1.创建线性表"<<endl;
		cout<<"----2.插入元素"<<endl;
		cout<<"----3.删除元素"<<endl;
		cout<<"----4.查看所有元素"<<endl;
		cout<<"----5.清屏"<<endl;
		cout<<"----6.销毁线性表"<<endl;
		cout<<"----7.将线性表重置为空表"<<endl;
		cout<<"----8.判断线性表是否为空"<<endl;
		cout<<"----9.获取线性表中元素个数"<<endl;
		cout<<"----10.获取线性表元素值"<<endl;
		cout<<"----11.获取元素前驱"<<endl;
		cout<<"----12.获取元素后继"<<endl; 
		cin>>n;
		switch(n){
			case 1:p=createlist(p);break;
			case 2:p=insertelem(p);break;
			case 3:p=deleteelem(p);break;
			case 4:show(p);break;
			case 5:system("cls");
			case 6:p=destroylist(p);break;
			case 7:p=clearlist(p);break;
			case 8:listempty(p);break;
			case 9:getlistsize(p);break;
			case 10:getelem(p);break;
			case 11:priorelem(p);break;
			case 12:nextelem(p);break;
		}
	}
}
