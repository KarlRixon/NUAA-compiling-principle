#include <stdio.h>
#include <stdlib.h>
 
struct grade {
    int score;
    struct grade *next;
};
typedef struct grade NODE;  //typedefΪC���ԵĹؼ��֣�������Ϊһ���������Ͷ���һ�������֡�
//ʹ��typedefĿ��һ����������һ���Ǹ�����һ���׼���������ȷ�������֣�
//��һ���Ǽ�һЩ�Ƚϸ��ӵ�����������
struct grade *create();   //��������
void insert(NODE *head,NODE *pnew,int i);   //��������
void pdelete(NODE *head,int i);   //ɾ���б�
void display(NODE *head);   //�������
void Pfree(NODE *head);    //��������
 
int main(int argc, char *argv[]) {
    struct grade *head,*pnew;
    head=create();
    if (head==NULL)
        return 0;
    printf("�������������");
    display(head);
    pnew=(NODE *)malloc(sizeof(NODE));
    if (pnew==NULL) {
        printf("����ʧ�ܣ�");
        return 0;
    }
    pnew->score=88;
    insert(head,pnew, 3);   //���½ڵ����ڵ�3�ĺ���
    printf("����������");
    display(head);
    pdelete(head,3);   //ɾ���ڵ�3
    printf("ɾ���������");
    display(head);
    Pfree(head);
    return 0;
}
 
struct grade *create() {
    NODE *head,*tail,*pnew;
    int score;
    head=(NODE *)malloc(sizeof(NODE));  //����ͷ�ڵ㡣
    if (head==NULL) { //����ʧ�ܷ���
        printf("����ʧ�ܣ�");
        return NULL;
    }
    head->next=NULL;  //ͷ�ڵ�ָ������NULL
    tail=head;  // ��ʼʱβָ��ָ��ͷ�ڵ�
    printf("����ѧ���ɼ���");
    while (1) { //��������
        scanf("%d",&score);
        if (score<0) //�ɼ�Ϊ�����˳�ѭ��
            break;
        pnew=(NODE *)malloc(sizeof(NODE));  //�����½ڵ�
        if (pnew==NULL) { //����ʧ�ܷ���
            printf("����ʧ�ܣ�");
            return NULL;
        }
        pnew->score=score;  //�½ڵ�������������ĳɼ�
        pnew->next=NULL;   //�½ڵ�ָ������NULL
        tail->next=pnew;  //�½ڵ���뵽��β
        tail=pnew;   //Ϊָ��ָ��ǰ��β�ڵ�
    }
    return head;  //���ش��������ͷָ��
}
void insert(NODE *head,NODE *pnew,int i) {
    NODE *p; //��ǰָ��
    int j;
 
    p=head;
    for (j=0; j<i&&p!=NULL; j++) //pָ��Ҫ����ĵ�i���ڵ�
        p=p->next;
     
    if (p==NULL) { //�ڵ�i������
        printf("�����Ľڵ㲻���ڣ�");
        return;
    }
 
    pnew->next=p->next;   //����ڵ��ָ����ָ���i���ڵ�ĺ�̽ڵ�
    p->next=pnew;    //���i���ڵ��ָ����ָ�������½ڵ�
}
 
void pdelete(NODE *head,int i) {
    NODE *p,*q;
    int j;
    if (i==0) //ɾ������ͷָ�룬����
        return;
    p=head;
    for (j=1; j<i&&p->next!=NULL; j++)
        p=p->next;  //��pָ��Ҫɾ���ĵ�i���ڵ��ǰ���ڵ�
    if (p->next==NULL) { //���������еĽڵ㲻����
        printf("�����ڣ�");
        return;
    }
    q=p->next;  //qָ���ɾ���Ľڵ�
    p->next=q->next;  //ɾ���ڵ�i��Ҳ��д��p->next=p->next->next
    free(q);   //�ͷŽڵ�i���ڴ浥Ԫ
}
void display(NODE *head) {
    NODE *p;
    for (p=head->next; p!=NULL; p=p->next)
        printf("%d ",p->score);
    printf("\n");
}
void pfree(NODE *head) {
    NODE *p,*q;
 
    p=head;
    while (p->next!=NULL) { //ÿ��ɾ��ͷ�ڵ�ĺ�̽ڵ�
        q=p->next;
        p->next=q->next;
        free(q);
    }
    free(head);   //���ɾ��ͷ�ڵ�
}
void Pfree(NODE *head) {
    NODE *p,*q;
    p=head;
    while (p->next!=NULL) {
        q=p->next;
        p->next=q->next;
        free(q);
    }
    free(p);
}
