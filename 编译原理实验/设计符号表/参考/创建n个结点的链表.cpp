#include<stdio.h>
#include<stdlib.h>
struct node
{	
	int data;          /* ���� */
	struct node *next;  /* ָ����һ����ָ�� */
};
struct node *create( )   /* ����ֵ: �������ָ�� */
{ 
	struct node *p1, *p2, *head;
	int a;
	head = NULL;		/* ������ */
	printf("Creating a list...\n");
	printf("Please input a number(if(-1) stop): ");
	scanf("%d", &a);        /* �����1������ */

	while( a != -1 )       /* ѭ���������ݣ��������� */
	{   	
	  p1 = (struct node *) malloc(sizeof(struct node)); 
	  p1->data = a; /* p1����ָ���¿��ٽ�� */
	  if(head==NULL)     /* �ٽ����׽�� */
		head= p1;  
	  else                            /* �ڴ����м��� */
		p2->next=p1;
	  p2=p1;   /*p2����ָ��ǰ��������һ�����*/
	  printf("Please input a number(if(-1) stop): ");
	  scanf("%d", &a);     /* ������һ������ */
	}
	if(head != NULL)  p2->next=NULL;   
          /* �۴���β���(�����1�ξ����� -1����˾䲻��) */
	return(head);            /* ���ش����������ָ�� */
}
int main()
{
	int n=4;
	create();
 } 
