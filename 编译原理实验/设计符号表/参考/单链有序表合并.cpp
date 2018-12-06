#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct list{
	int num;
	list *next;
}list;

void merge(list *ha,list *hb){
	list *pa=NULL,*pb=NULL,*pn=NULL;
	pa=ha;pb=hb->next;
	while(pa->next&&pb){
		if(pa->next->num<pb->num)pa=pa->next;
		else if(pa->next->num>=pb->num){
			pn=(list*)malloc(sizeof(list));
			pn->next=NULL;pn->num=pb->num;
			pb=pb->next;
			pn->next=pa->next;
			pa->next=pn;
		}
	}
	if(!pa->next&&pb){
		while(pb){
			pa->next=pb;pb=pb->next;
		}
	}
}
int main(){
	list *ha=NULL,*hb=NULL,*p=NULL,*pn;
	ha=(list*)malloc(sizeof(list));
	hb=(list*)malloc(sizeof(list));
	ha->next=NULL;hb->next=NULL;
	ha->num=0;hb->num=0;
	p=ha;
	for(int i=0;i<10;i++){
		pn=(list*)malloc(sizeof(list));
		pn->next=NULL;
		pn->num=i*2+1;
		p->next=pn;
		p=p->next;
	}
	p=hb;
	for(int i=0;i<10;i++){
		pn=(list*)malloc(sizeof(list));
		pn->next=NULL;
		pn->num=i*2;
		p->next=pn;
		p=p->next;
	}
	cout<<"a:\t";for(p=ha->next;p;p=p->next)cout<<p->num<<"\t";cout<<endl;
	cout<<"b:\t";for(p=hb->next;p;p=p->next)cout<<p->num<<"\t";cout<<endl;
	merge(ha,hb);
	cout<<"c:\t";for(p=ha->next;p;p=p->next)cout<<p->num<<"\t";cout<<endl;
}
