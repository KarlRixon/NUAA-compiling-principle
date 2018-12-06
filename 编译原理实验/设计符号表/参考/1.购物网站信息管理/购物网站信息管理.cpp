#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

typedef struct goods{		//��Ʒ 
	int shopnum;
	char goodname[21];
	float price;
	int sales;
	goods *next;
}goods;
typedef struct shop{		//���� 
	int shopnum;
	char shopname[21];
	float creditworthiness;
	goods *goodhead;
	shop *next; 
}shop;
typedef struct qgoods{		//��ѯ��� 
	int shopnum;
	char goodname[21];
	float price;
	int sales;
	qgoods *prior;
	qgoods *next;
}qgoods;

void createhead(shop* &head){
	head=(shop*)malloc(sizeof(shop));
	head->creditworthiness=0;
	head->goodhead=(goods*)malloc(sizeof(goods));		//������ͷ������⻯���Լ���goodhead 
	head->goodhead->price=0;
	head->goodhead->sales=0;
	head->goodhead->next=NULL;
	head->shopnum=0;
	head->next=NULL;
}
void init(shop *head){		//���ļ��ж�ȡ���ݵ�����
	fstream infile1,infile2;
	infile1.open("shop.dat",ios::in|ios::binary);
	if(!infile1){
		cout<<"file not exists"<<endl;
		infile1.close();
		infile1.open("shop.dat",ios::out|ios::binary);
	}
	infile2.open("goods.dat",ios::in|ios::binary);
	if(!infile2){
		cout<<"file not exists"<<endl;
		infile2.close();
		infile2.open("goods.dat",ios::out|ios::binary);
	}
	shop *ps=NULL,*p=NULL;
	goods *pg=NULL;
	while(!infile1.eof()){
		//��ȡһ������ 
		ps=(shop*)malloc(sizeof(shop));
		infile1.read((char*)ps,sizeof(shop));
		ps->goodhead=(goods*)malloc(sizeof(goods));
		ps->goodhead->next=NULL;
		ps->next=NULL;								//���Ǽ�NULL�����ˣ��������� 
		if(ps->shopnum<0||ps->shopnum>2000){
			free(ps);
			break;
		}
		//�����������Ʒ
		while(!infile2.eof()){
			goods *g=NULL;
			if(pg!=NULL&&pg->shopnum<ps->shopnum)continue;
			if(pg!=NULL&&pg->shopnum==ps->shopnum){
				for(g=ps->goodhead;g->next!=NULL;g=g->next);
//				pg->next=NULL;
				g->next=pg;
			}
			pg=(goods*)malloc(sizeof(goods));
			infile2.read((char*)pg,sizeof(goods));
			pg->next=NULL;
			if(pg->shopnum<0||pg->shopnum>2000){
				free(pg);
				break;
			}
			if(pg->shopnum>ps->shopnum)break;
			if(pg->shopnum==ps->shopnum){
				for(g=ps->goodhead;g->next!=NULL;g=g->next);
//				pg->next=NULL;
				g->next=pg;
				pg=NULL;
			}
		}
		if(ps->shopnum==0)break;
		if(ps->shopnum==1){		//��һ�����������⴦����Ȼ���¶�ȡ�ļ��ᵼ�������ظ� 
			head->next=ps;
		}
		else{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=ps;
		} 
	}
	infile1.close();
	infile2.close();
	return;
}
int searchshopname(shop *head,char *name){
	if(head->next==NULL)return 0;
	shop *p=head->next;
	for(;p!=NULL;p=p->next)
		if(strcmp(p->shopname,name)==0)return 1; 
	return 0;
}
int searchgoodname(shop *shop,char *goodname){
	if(shop->goodhead->next==NULL)return 0;
	goods *pg=shop->goodhead->next;
	for(;pg!=NULL;pg=pg->next)
		if(strcmp(pg->goodname,goodname)==0)return 1;
	return 0;
}
void refreshfile(shop *head){
	fstream outfile1,outfile2;
	outfile1.open("shop.dat",ios::out|ios::binary);
	if(!outfile1){
		cout<<"file with error"<<endl;
		exit(0);
	}
	outfile2.open("goods.dat",ios::out|ios::binary);
	if(!outfile2){
		cout<<"file with error"<<endl;
		exit(0);
	}
//	if(head->next==NULL){
//		cout<<"û����Ϣ�ɴ�"<<endl;
//		outfile1.close();
//		outfile2.close();
//		return;
//	}
	shop *p=head->next;
	goods *pg=NULL;
	for(;p!=NULL;p=p->next){
		outfile1.write((char*)p,sizeof(shop));
		if(p->goodhead->next!=NULL){
			pg=p->goodhead->next;
			for(;pg!=NULL;pg=pg->next){
				outfile2.write((char*)pg,sizeof(goods));
			}
		}
	}
	outfile1.close();
	outfile2.close();
	cout<<"�ļ�ˢ�³ɹ�"<<endl;
	return;
}
void addshop(shop *head){
	int flag=0;
	shop *pn=NULL,*p=NULL;
	goods *png=NULL,*pg=NULL;
	pn=(shop*)malloc(sizeof(shop));
	pn->goodhead=(goods*)malloc(sizeof(goods));
	pn->goodhead->shopnum=0;
	pn->goodhead->price=0;
	pn->goodhead->sales=0;
	pn->goodhead->next=NULL;
	pn->next=NULL;
	//������Ϣ 
	pn->creditworthiness=5;
	while(1){
		cout<<"������������";
		if(flag==0){			//����flag���ʹ��cin.ignore 
			cin.ignore();
		}
		flag=0;
		cin.getline(pn->shopname,20);
		if(searchshopname(head,pn->shopname)){
			cout<<"�������Ѵ���"<<endl;
			flag=1;
			continue;
		}
		else break;
	}
	//��ӵ�����
	int i=0;
	if(head->next==NULL){		//��ӵ�һ������ 
		pn->shopnum=1;
		i=1;
		head->next=pn;
	}
	else {
		for(p=head->next,i=p->shopnum;p->next!=NULL;p=p->next);
		i=p->shopnum;
		pn->shopnum=++i;
		p->next=pn;
	}
	//��Ʒ��Ϣ
	while(1){
		png=(goods*)malloc(sizeof(goods));
		png->next=NULL;
		png->shopnum=i;
		cout<<"������Ʒ����(����0��������)��";
//		cin.ignore();
		cin.getline(png->goodname,20);
		if(searchgoodname(pn,png->goodname)){
			cout<<"���������и���Ʒ"<<endl;
			free(png);
			continue;
		}
		if(strcmp(png->goodname,"0")==0){
			free(png);
			break;
		}
		while(1){
			cout<<"������Ʒ���ۣ�";
			cin>>png->price;
			cin.ignore();
			if(png->price<0){
				cout<<"�������"<<endl;
				continue;
			}
			else break;
		}
		png->sales=0;
		//�����Ʒ
		if(pn->goodhead->next==NULL){		//��ӵ�һ����Ʒ 
			pn->goodhead->next=png;
		}
		else {
			for(pg=pn->goodhead->next;pg->next!=NULL;pg=pg->next);
			pg->next=png;
		}
	}
	refreshfile(head);
	return;
}
void deleteshop(shop *head){
	int n=0,i=0,flag=0;
	shop *ps=NULL;
	goods *pg=NULL;
	cout<<"�������̱�ţ�";
	cin>>n;
	for(ps=head;ps->next!=NULL;ps=ps->next){
		if(ps->next->shopnum==n){
			i=ps->next->shopnum;
			ps->next=ps->next->next;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"�޸�����"<<endl;
		return;
	}
	else{
		for(ps=ps->next;ps!=NULL;ps=ps->next,++i){
			ps->shopnum=i;
			pg=ps->goodhead;
			for(;pg!=NULL;pg=pg->next){
				pg->shopnum=i;
			}
		}
	}
	refreshfile(head);
	return;
}
void addgood(shop *head){
	int n=0,flag=0;
	cout<<"�������̱�ţ�";
	cin>>n;cin.ignore();
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag=1;
			while(1){
				goods *png=(goods*)malloc(sizeof(goods));
				png->next=NULL;
				png->shopnum=ps->shopnum; 
				cout<<"������Ʒ���ƣ�����0��������";
				cin.getline(png->goodname,20);
				if(searchgoodname(ps,png->goodname)){
					cout<<"���������и���Ʒ"<<endl;
					free(png);
					continue;
				}
				if(strcmp(png->goodname,"0")==0){
					free(png);
					break;
				}
				while(1){
					cout<<"������Ʒ���ۣ�";
					cin>>png->price;
					cin.ignore();
					if(png->price<0){
						cout<<"�������"<<endl;
						continue;
					}
					else break;
				}
				png->sales=0;
				//�����Ʒ
				if(ps->goodhead->next==NULL){		//��ӵ�һ����Ʒ 
					ps->goodhead->next=png;
				}
				else {
					goods *pg=NULL;
					for(pg=ps->goodhead->next;pg->next!=NULL;pg=pg->next);
					pg->next=png;
					cout<<"��ӳɹ�"<<endl; 
				}
			}
		}
	}
	if(flag==0){
		cout<<"û�д�����"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void deletegood(shop *head){
	int n=0,flag1=0,flag2=0;
	char goodname[21];
	cout<<"�������̱�ţ�";
	cin>>n;cin.ignore();
	cout<<"������Ʒ���ƣ�����0��������";
	cin.getline(goodname,20);
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag1=1;
			for(goods *pg=ps->goodhead;pg->next!=NULL;pg=pg->next){
				if(strcmp(pg->next->goodname,goodname)==0){
					flag2=1;
					pg->next=pg->next->next;
					cout<<"ɾ���ɹ�"<<endl;
				}
			}
		}
	}
	if(flag1==0){
		cout<<"û�д�����"<<endl;
		return;
	}
	if(flag2==0){
		cout<<"û�д���Ʒ"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void purchase(shop *head){
	int n=0,flag1=0,flag2=0,s=0;
	char goodname[21];
	cout<<"�������̱�ţ�";
	cin>>n;cin.ignore();
	cout<<"������Ʒ���ƣ�����0��������";
	cin.getline(goodname,20);
	shop *ps=head->next;
	for(;ps!=NULL;ps=ps->next){
		if(ps->shopnum==n){
			flag1=1;
			for(goods *pg=ps->goodhead;pg->next!=NULL;pg=pg->next){
				if(strcmp(pg->next->goodname,goodname)==0){
					flag2=1;
					cout<<"���빺��������";
					cin>>s; 
					pg->next->sales+=s;
				}
			}
		}
	}
	if(flag1==0){
		cout<<"û�д�����"<<endl;
		return;
	}
	if(flag2==0){
		cout<<"û�д���Ʒ"<<endl;
		return;
	}
	refreshfile(head);
	return;
}
void addquerybysaleorder(qgoods *qhead,goods *pg){
	qgoods *qn=NULL,*q=NULL;
	q=qhead;
	qn=(qgoods*)malloc(sizeof(qgoods));
	qn->next=NULL;
	qn->price=pg->price;
	qn->prior=NULL;
	qn->sales=pg->sales;
	qn->shopnum=pg->shopnum;
	strcpy(qn->goodname,pg->goodname);
	if(q->next==NULL){
		q->next=qn;
		q->prior=qn;
		qn->prior=q;
		qn->next=q;
		return;
	}
	else{
		for(q=qhead->next;q!=qhead;q=q->next){
			if(q->sales<qn->sales){
				qn->prior=q->prior;
				q->prior->next=qn;
				qn->next=q;
				q->prior=qn;
				break;
			}
			if(q->next==qhead&&q->sales>=qn->sales){
				q->next=qn;
				qn->prior=q;
				qhead->prior=qn;
				qn->next=qhead;
				break;
			}
		}
	}
}
void showquery(qgoods *qhead,shop *head){
	qgoods *q=NULL;
	shop *ps=NULL;
	for(q=qhead->next;q!=qhead;q=q->next){
		cout<<"-----------------------------------"<<endl;
		cout<<"\t��Ʒ������"<<q->sales<<endl;
		cout<<"\t��Ʒ���ƣ�"<<q->goodname<<endl;
		cout<<"\t��Ʒ�۸�"<<q->price<<endl;
		cout<<"\t������Ϣ��"<<endl;
		cout<<"\t\t���̱�ţ�"<<q->shopnum<<endl;
		for(ps=head->next;ps!=NULL;ps=ps->next){
			if(ps->shopnum==q->shopnum){
				cout<<"\t\t�������ƣ�"<<ps->shopname<<endl;
				cout<<"\t\t���������ȣ�"<<ps->creditworthiness<<endl;
				cout<<"\t\t-------------------"<<endl;
				break;
			}
		}
		cout<<"-----------------------------------"<<endl;
	}
}
void goodquery(shop *head){
	int flag=0;
	char goodname[21];
	qgoods *qn=NULL,*q=NULL;
	qgoods *qhead=(qgoods*)malloc(sizeof(qgoods));
	qhead->next=NULL;
	qhead->price=0;
	qhead->prior=NULL;
	qhead->sales=0;
	qhead->shopnum=0;
	cout<<"������Ʒ���ƣ�";
	cin.ignore();
	cin.getline(goodname,20);
	for(shop *ps=head->next;ps!=NULL;ps=ps->next){
		for(goods *pg=ps->goodhead->next;pg!=NULL;pg=pg->next){
			if(strcmp(pg->goodname,goodname)==0){
				flag=1;
				addquerybysaleorder(qhead,pg);
			}
		}
	}
	if(flag==0){
		cout<<"û�в��ҵ�����Ʒ"<<endl;
	}
	showquery(qhead,head);
}
void show(shop *head){
	shop *p=head->next;
	goods *pg=NULL;
	for(;p!=NULL;p=p->next){
		cout<<"-----------------------------------"<<endl;
		cout<<"\t���̱�ţ�\t"<<p->shopnum<<endl;
		cout<<"\t��������\t"<<p->shopname<<endl;
		cout<<"\t�����ȣ�\t"<<p->creditworthiness<<endl;
		cout<<"\t��Ʒ�б�"<<endl;
		for(pg=p->goodhead->next;pg!=NULL;pg=pg->next){
			cout<<"\t\t��Ʒ���ƣ�"<<pg->goodname<<endl;
			cout<<"\t\t��Ʒ���ۣ�"<<pg->price<<endl;
			cout<<"\t\t��Ʒ������"<<pg->sales<<endl;
			cout<<"\t\t-------------------"<<endl;
		}
		cout<<"-----------------------------------"<<endl;
	}
	return;
}


int main(){
	int n=0;
	shop *head=NULL;
	createhead(head);
	init(head);
	while(1){
		cout<<"menu"<<endl;
		cout<<"----1.���һ������"<<endl;
		cout<<"----2.ɾ��һ������"<<endl;
		cout<<"----3.���������е���Ʒ"<<endl;
		cout<<"----4.ɾ�������е���Ʒ"<<endl;
		cout<<"----5.��ѯ��Ʒ"<<endl;
		cout<<"----6.������Ʒ"<<endl;
		cout<<"----7.ˢ���ļ���Ϣ"<<endl;
		cout<<"----8.���¶�ȡ�ļ�"<<endl;
		cout<<"----9.��ʾȫ����Ϣ"<<endl;
		cout<<"----10.����"<<endl;
		cout<<"----11.�˳�����"<<endl;
		cin>>n;
		switch(n){
			case 1:addshop(head);break;
			case 2:deleteshop(head);break;
			case 3:addgood(head);break;
			case 4:deletegood(head);break;
			case 5:goodquery(head);break;
			case 6:purchase(head);break;
			case 7:refreshfile(head);break;
			case 8:init(head);break;
			case 9:show(head);break;
			case 10:system("cls");break;
			case 11:refreshfile(head);return 0;
		}
	} 
}
