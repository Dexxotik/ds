#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head,*tail;
struct node* head=NULL;
void deletion()
{
	struct node* temp;
	int x,pos,i;
	temp=head;
	if(head==NULL){
		printf("linked list is empty\n");
		return;
	}
	printf("delete element at\n1.begining\n2.ending\n3.specific\n");
	scanf("%d",&x);
	if(x==1){
		head=head->next;
	}
	if(x==2){
		while(temp->next!=tail){
			temp=temp->next;
		}
		temp->next=NULL;
		tail=temp;
	}
	if(x==3){
		printf("enter the position at which element needd to deleted\n");
		scanf("%d",&pos);
		for(i=0;i<pos-1;i++){
			temp=temp->next;
		}
		temp->next=temp->next->next;
	}
	
}
void create(){
	struct node *new;
	int data,c=1;
	while(c)
	{
		new=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\n");
		scanf("%d",&data);
		new->data=data;
		new->next=NULL;
		if(head==NULL){
			head=new;
			tail=new;
		}
		else{
			tail->next=new;
			tail=new;
		}
		printf("do yo want to conitnue(1-yes/0-no)/\n");
		scanf("%d",&c); 
	}
}

void insert()
{
	struct node *new1,*temp;
	int value,choice,pos,i;
	new1=(struct node*)malloc(sizeof(struct node));
	printf("Insert element at\n1.beginning\n2.specified postion\n3.end");
	scanf("%d",&choice);
	printf("enter the data\n");
	scanf("%d",&value);
	new1->data=value;
	if(choice==1){
		new1->next=head;
	    head=new1;
	    return;
	}
	if(choice==2){
		printf("enter the position at which the element need to be inserted\n");
	    scanf("%d",&pos);
	    temp=head;
	    for(i=0;i<pos-1;i++)
	    {
		    temp=temp->next;
        }
        new1->next=temp->next;
	    temp->next=new1;
	    temp=new1;
	    return;
	}
	if(choice==3){
		new1->next=NULL;
	    tail->next=new1;
	    tail=new1;
	}
}
void display()
{
	struct node *temp1;
	int count=0;
	temp1=head;
	if(head==NULL){
		printf("linked list is empty\n");
	}
	else{
		while(temp1!=NULL){
		printf("%d\n",temp1->data);
		temp1=temp1->next;
		count++;
	}
	printf("no.of elements %d\n",count);
	}
		
}

int main(){
	int c=1,a;
	while(c==1)
	{
		printf("MENU LIST\n");
		printf("1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&a);
		switch(a){
			case 1:create();
				break;
			case 2:insert();
			break;
			case 3:deletion();
			break;
			case 4:display();
			break;
			case 5:exit(0);
		}
		printf("do yo want to conitnue(1-yes/0-no)/\n");
		scanf("%d",&c); 
	}
    return 0;
}
