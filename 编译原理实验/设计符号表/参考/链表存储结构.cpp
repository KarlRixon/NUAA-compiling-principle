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
		cout<<"�����"<<i<<"��Ԫ��ֵ��";
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
	cout<<"����Ϊ��";
	for(int i=0;;i++){
		q=q->next;
		if(q!=NULL)cout<<q->a<<"\t";
		else break;
	}
	cout<<endl;
}
void listempty(list *p){
	if(p==NULL)cout<<"��������"<<endl;
	else if(p->next==NULL)cout<<"����Ϊ��"<<endl; 
	else cout<<"����Ϊ��"<<endl;
}
list *clearlist(list *p){
	if(p==NULL)cout<<"��������"<<endl;
	else if(p->next==NULL)cout<<"����Ϊ��"<<endl; 
	else{
		free(p->next);
		p->next=NULL;
		return p;
	}
}
list *destroylist(list *p){
	if(p==NULL)cout<<"��������"<<endl;
	else if(p->next==NULL)cout<<"����Ϊ��"<<endl; 
	else{
		free(p);
		p=NULL;
		return p;
	}
}
void getlistsize(list *p){
	cout<<"Ԫ�ظ���Ϊ"<<count;
}
void getelem(list *p){
	cout<<"�����ȡ�ڼ���Ԫ�أ�";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<1||n>count){
		cout<<"�������"<<endl;
		return;
	}
	for(int i=0;i<n;i++){
		q=q->next;
		if(p==NULL){
			cout<<"�������"<<endl;
			return;
		}
	}
	cout<<"��"<<n<<"��Ԫ��ֵΪ��"<<q->a<<endl;
}
void priorelem(list *p){
	cout<<"�����ȡ�ڼ���Ԫ�ص�ǰ����";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<2||n>count){
		cout<<"�������"<<endl;
		return;
	}
	for(int i=0;i<n-1;i++){
		q=q->next;
		if(q==NULL){
			cout<<"�������"<<endl;
			return;
		}
	}
	cout<<"��"<<n<<"��Ԫ��ǰ��ֵΪ��"<<q->a<<endl;
}
void nextelem(list *p){
	cout<<"�����ȡ�ڼ���Ԫ�صĺ�̣�";
	int n=0;
	list *q=p;
	cin>>n;
	if(n<1||n>count-1){
		cout<<"�������"<<endl;
		return;
	}
	for(int i=0;i<n+1;i++){
		q=q->next;
		if(q==NULL){
			cout<<"�������"<<endl;
			return;
		}
	}
	cout<<"��"<<n<<"��Ԫ�غ��ֵΪ��"<<q->a<<endl;
}
list *insertelem(list *p){
	list *q,*pn;
	q=pn=NULL;
	q=p;
	int n=0,num=0;
	cout<<"�ڵڼ���Ԫ�غ���룺";
	cin>>n;
	if(n<1||n>count){
		cout<<"�������"<<endl;
		return p;
	}
	cout<<"�������ֵ��";
	cin>>num;
	if(num==0){
		cout<<"���벻��Ϊ0"<<endl;
		return p;
	}
	for(int i=0;i<n;i++){
		q=q->next;
//		if(q==NULL){
//			cout<<"�������"<<endl;
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
	cout<<"ɾ���ڼ���Ԫ�أ�";
	cin>>n;
	if(n<1||n>count){
		cout<<"�������"<<endl;
		return p;
	}
	for(int i=0;i<n-1;i++){
		q=q->next;
//		if(q==NULL){
//			cout<<"�������"<<endl;
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
	list *p;		//ͷ��� 
	p=NULL;
	while(1){
		cout<<"����"<<endl;
		cout<<"----1.�������Ա�"<<endl;
		cout<<"----2.����Ԫ��"<<endl;
		cout<<"----3.ɾ��Ԫ��"<<endl;
		cout<<"----4.�鿴����Ԫ��"<<endl;
		cout<<"----5.����"<<endl;
		cout<<"----6.�������Ա�"<<endl;
		cout<<"----7.�����Ա�����Ϊ�ձ�"<<endl;
		cout<<"----8.�ж����Ա��Ƿ�Ϊ��"<<endl;
		cout<<"----9.��ȡ���Ա���Ԫ�ظ���"<<endl;
		cout<<"----10.��ȡ���Ա�Ԫ��ֵ"<<endl;
		cout<<"----11.��ȡԪ��ǰ��"<<endl;
		cout<<"----12.��ȡԪ�غ��"<<endl; 
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
