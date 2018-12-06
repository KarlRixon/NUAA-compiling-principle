#include <stdio.h>
#include <stdlib.h> 
struct node
{	
	int data;          /* 数据 */
	struct node *next;  /* 指向下一结点的指针 */
};

int main( )
{ 	struct node  *head, *p1, *p2;    
	/*创建链表*/
	head = (struct node *) malloc(sizeof(struct node));
	p1 = (struct node *) malloc(sizeof(struct node));   
	p2 = (struct node *) malloc(sizeof(struct node));
	head->data = 1000;  head->next = p1; 
	p1->data = 1001;    p1->next = p2;    
	p2->data = 1002;    p2->next = NULL; 
    /*输出各结点数据并释放空间*/
	while(head!=NULL) 
	{	printf("%d\n", head->data);
		p1=head; 
		head = head->next; 
		free(p1);
	}
    return 0;
}

