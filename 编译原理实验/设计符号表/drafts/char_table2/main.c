/*************************************************************************
    > File Name: char_table.c
    > Author:
    > Mail:
    > Created Time: 2018年11月26日 星期一 14时26分07秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct character{
    char string[10];
    //char info[20];
    int val;
    struct character *next;
}character;

character* createList(character *head, char *string, int val){
    struct character *p1, *p2;
    p1=(character *)malloc(sizeof(character));
    strcpy(p1->string, string);
    p1->val=val;
    p1->next=NULL;
    //printf("%s\t%d\n", p1->string, p1->val);
    if(head==NULL)
        head=p1;
    else{
        p2=head;
        while(p2->next!=NULL)
            if(strcmp(p2->string, p1->string)==0)
                return head;
            p2=p2->next;
        if(strcmp(p2->string, p1->string)==0)
            return head;
        p2->next=p1;
    }
    return head;
}

void showList(struct character *head){
    struct character *p1=head;
    while(p1!=NULL){
        printf("string: %s\tvalue: %d\n", p1->string, p1->val);
        p1=p1->next;
    }
}

int main(){
    struct character *head=NULL;
    char string[]="aaa";
    head = createList(head, string, 666);
    //head = createList(head, string, 555);
    showList(head);
    return 0;
}
