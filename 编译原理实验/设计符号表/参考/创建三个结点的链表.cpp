#include <stdio.h>
#include <stdlib.h> 
struct node
{	
	int data;          /* ���� */
	struct node *next;  /* ָ����һ����ָ�� */
};

int main( )
{ 	struct node  *head, *p1, *p2;    
	/*��������*/
	head = (struct node *) malloc(sizeof(struct node));
	p1 = (struct node *) malloc(sizeof(struct node));   
	p2 = (struct node *) malloc(sizeof(struct node));
	head->data = 1000;  head->next = p1; 
	p1->data = 1001;    p1->next = p2;    
	p2->data = 1002;    p2->next = NULL; 
    /*�����������ݲ��ͷſռ�*/
	while(head!=NULL) 
	{	printf("%d\n", head->data);
		p1=head; 
		head = head->next; 
		free(p1);
	}
    return 0;
}

