#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int length=0;
void insert_sort(int unsorted[]){
	int temp;
	for (int i=1;i<length;i++){
		if (unsorted[i-1]>unsorted[i]){
			temp=unsorted[i];
			int j=0;
			for(j=i;j>0&&unsorted[j-1]>temp;j--){
				unsorted[j]=unsorted[j-1];
			}
			unsorted[j]=temp;
		}
	}
}
int main(){
	int n=0;
	int unsorted[101];
	for(int i=0;i<100;i++){
		cin>>n;
		if(n!=0){
			unsorted[i]=n;
			length++;
		}else break;
	}
	insert_sort(unsorted);
	for(int i=0;i<length;i++){
		if(unsorted[i])cout<<unsorted[i]<<"\t";
		else break;
	}
}
