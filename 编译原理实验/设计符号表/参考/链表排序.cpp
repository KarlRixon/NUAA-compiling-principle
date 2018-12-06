#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;

typedef struct Demo{
	int num;
	Demo* next;
} demo,*demop;

demop createhead(demop head){
	head=(demop)malloc(sizeof(demo));
	head->num=0;
	head->next=NULL;
	return head;
}
demop createlist(demop head,int n){
	demop p1,p2;
	p1=p2=NULL;
	p1=head;
	for(int i=0;i<n;i++){
		p2=(demop)malloc(sizeof(demo));
		p2->num=rand();
		p2->next=NULL;
		p1->next=p2;
		p1=p2;
	}
	return head;
}
void display(demop head){
	demop p1;
	p1=head->next;
	for(int i=0;;i++){
		if((i+5)%5==0) cout<<endl;
		cout<<left<<setw(5)<<i+1<<"->"<<left<<setw(10)<<p1->num;
		p1=p1->next;
		if(p1==NULL) break;
	}
	cout<<"链表显示结束"<<endl;
}
void sortsb(demop head){
	demop p,q,m;
	p=q=m=NULL;
	m=p=head->next;
	q=p->next;
	while(q){
		while(q){
			m=q->num<m->num?q:m;
			q=q->next;
		}
		if(m->num!=p->num){
			int t=p->num;
			p->num=m->num;
			m->num=t;
		}
		m=p=p->next;
		q=p->next;
	}
}
void sortbs(demop head){
	demop p,q,m;
	p=q=m=NULL;
	m=p=head->next;
	q=p->next;
	while(q){
		while(q){
			m=q->num>m->num?q:m;
			q=q->next;
		}
		if(m->num!=p->num){
			int t=p->num;
			p->num=m->num;
			m->num=t;
		}
		m=p=p->next;
		q=p->next;
	}
}

int main(){
	srand((unsigned)time(NULL));
	int n=0;
	demop head=NULL;
	head=createhead(head);
	cout<<"输入链表节点数：";
	cin>>n;
	createlist(head,n);
	cout<<"创建成功"<<endl;
	display(head);
	cout<<"请选择排序方式（1.从小到大 2.从大到小）：";
	n=0;cin>>n;
	if(n==1) sortsb(head);
	else if(n==2) sortbs(head);
	display(head);
}
