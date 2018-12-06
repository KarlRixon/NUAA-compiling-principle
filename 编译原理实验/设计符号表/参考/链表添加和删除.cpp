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
void inselem(demop head){
	bool isSuccess=false;
	int n=0,num=0;
	cout<<"你想在几号下标的元素后插入：";
	cin>>n;
	cout<<"输入该元素保存数字：";
	cin>>num;
	demop p1,p2,pn;
	p1=p2=pn=NULL;
	p1=head;
	p2=p1->next;
	for(int i=0;;i++){
		if(i==n){
			pn=(demop)malloc(sizeof(demo));
			pn->num=num;
			p1->next=pn;
			pn->next=p2;
			cout<<"操作成功"<<endl;
			isSuccess=true;
			break;
		}
		p1=p2;
		p2=p2->next;
	}
	if(!isSuccess)
		cout<<"未找到所给标号"<<endl;
}
void delelem(demop head){
	bool isSuccess=false;
	int n=0,num=0;
	cout<<"你想要删除的元素下标：";
	cin>>n;
	demop p1,p2;
	p1=p2=NULL;
	p1=head;
	p2=p1->next;
	for(int i=0;;i++){
		if(i==n-1){
			p1->next=p2->next;
			cout<<"操作成功"<<endl;
			isSuccess=true;
			break;
		}
		p1=p2;
		p2=p2->next;
	}
	if(!isSuccess)
		cout<<"未找到所给标号"<<endl;
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
	cout<<"请选择（1.添加元素 2.删除元素）：";
	n=0;cin>>n;
	if(n==1) inselem(head);
	else if(n==2) delelem(head);
	display(head);
}
