/*************************************************************************
	> File Name: char_table.c
	> Author: KarlRixon 
	> Mail: 2434685393@qq.com
	> Created Time: 2018年11月25日 星期日 23时00分20秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct character{
    char string[10];
    char info[20];
    int val;
    struct character *next;
};

void main(){
    struct character *p1, *p2, *head;
    p1 = (struct character *)malloc(sizeof(struct character));
    scanf("%s", p1->string);
    printf("%s\n", p1->string);
    scanf("%s", p1->info);
    printf("%s\n", p1->info);
    scanf("%d", &p1->val);
    printf("%d\n", p1->val);
    p1->next=NULL;
    head=p1;
    return;
}
