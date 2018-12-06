#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct list{
	int num;
	list *next;
}list;

int length=0;
void insert_sort(list *head){
	list *temp=NULL,*p=NULL,*tr=NULL;
	p=head->next;
	for(int i=1;i<length;i++){
		if(p->num>p->next->num){
			temp=p->next;
			p->next=p->next->next;
			for(tr=head;tr->next->num<temp->num;tr=tr->next);
			temp->next=tr->next;
			tr->next=temp;
		}
		else p=p->next;			//这里的else很重要！！！！ 
	}
}
int main(){
	int n=0;
	list *head=NULL,*p=NULL,*pn=NULL;
	head=(list*)malloc(sizeof(list));
	head->next=NULL;
	head->num=0;
	p=head;
	for(int i=0;i<100;i++){
		cin>>n;
		if(n!=0){
			pn=(list*)malloc(sizeof(list));
			pn->next=NULL;
			pn->num=n;
			p->next=pn;
			p=p->next; 
			length++;
		}else break;
	}
	insert_sort(head);
	p=head;
	for(int i=0;i<length;i++){
		p=p->next;
		if(p->num)cout<<p->num<<"\t";
		else break;
	}
}
