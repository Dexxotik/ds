// queue using an array
#include<stdio.h>
#include<stdlib.h>
int queue[100],front=-1,rear=-1,n,c=1;
void enqueue(){
    if (rear == n - 1) {  
        printf("Queue is overflow\n");
    } else {
        int a;
        if (front == -1) {
            front = 0;  
        }
        rear++;
        printf("Enter the value: ");
        scanf("%d", &a);
        queue[rear] = a;  
    }
}
void dequeue(){
    if(front==-1){
        printf("queue is under flow");
    }else{
        front--;
    }
}
void display(){
    int i;
    if(front==-1||front>rear){
        printf("queue is under flow");
    }else{
        printf("queue elements are:");
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}
int main(){
    printf("\n enter the size of the queue: \n"); 
    scanf("%i",&n);
    printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n enter the choice:\n");
    while(c==1){
        int op;
        
        scanf("%i",&op);
        switch(op){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
        printf("\ndo you want to continue(1-yes/0-no)\n");
        scanf("%i",&c);
    }
    return 0;
}