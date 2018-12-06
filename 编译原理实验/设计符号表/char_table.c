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
    character *p1, *p2;
    p1=(character *)malloc(sizeof(character));
    strcpy(p1->string, string);
    p1->val=val;
    p1->next=NULL;
    //printf("%s\t%d\n", p1->string, p1->val);
    if(head==NULL)
        head=p1;
    else{
        p2=head;
        while(p2->next!=NULL){
            if(strcmp(p2->string, p1->string)==0)
                return head;
            p2=p2->next;
		}
        if(strcmp(p2->string, p1->string)==0)
            return head;
        p2->next=p1;
    }
    return head;
}

character* delNode(character *head, char *string){
	character *p1=head;
	character *p2=head;
	if(strcmp(p1->string, string)==0){
		head=p1->next;
		free(p1);
		return head;
	}else{
		p1=p1->next;
		while(p1!=NULL){
			if(strcmp(p1->string, string)==0){
				head=p1->next;
				free(p1);
				return head;
			}
			p1=p1->next;
		}
	}
	printf("未找到该符号，无法删除\n");
	return head;
}

character* search(character *head, char *string){
	character *p1=head;
	while(p1!=NULL){
		if(strcmp(p1->string, string)==0)
			return p1;
		p1=p1->next;
	}
	printf("未找到该符号，返回头节点\n");
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
    character *head=NULL;
    character *p=NULL;
	char string[]="aaa";
    head = createList(head, string, 666);
    head = createList(head, string, 555);
	p = search(head, string);
	printf("string: %s\tvalue: %d\n", p->string, p->val);
	head = delNode(head, string);
    showList(head);
    return 0;
}

