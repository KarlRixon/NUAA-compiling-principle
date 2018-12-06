#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void merge(int a[],int *b){
	int i=0,j=0,c=0;
	for(;i<20&&j<10;){
		if(*(a+i)<*(b+j)&&c<10){i++;c++;}
		else if(*(a+i)>=*(b+j)){
			for(int n=19;n>i;n--)*(a+n)=*(a+n-1);
			*(a+i)=*(b+j);
			j++;c--;
		}
		else if(c==10)
			for(;i<20&&j<10;j++,i++)*(a+i)=*(b+j);
	}
}
int main(){
	int *a=NULL,*b=NULL;
	a=(int*)malloc(sizeof(int)*20);
	b=(int*)malloc(sizeof(int)*10);
	for(int i=0;i<10;i++){
		*(a+i)=i*2+1;
		*(b+i)=i*2;
	}
	cout<<"a:\t";for(int i=0;i<10;i++)cout<<*(a+i)<<"\t";cout<<endl;
	cout<<"b:\t";for(int i=0;i<10;i++)cout<<*(b+i)<<"\t";cout<<endl;
	merge(a,b); 
	cout<<"c:\t";for(int i=0;i<20;i++)cout<<*(a+i)<<"\t";cout<<endl;
}
