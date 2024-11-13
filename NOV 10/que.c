#include<stdio.h>
#define n 5
int front=-1,rear=0;
int q[n];
void enq(){
    int data;
    printf("enter the data:");
    scanf("%d",&data);
    if(rear==n-1){
        printf("overflow");
    }
    else if{
        front ++;
        rear++;
        q[rear]=data;
    }
}
void deq(){
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else{
        front--;
    }

void display(){
    for(int i=front;i>=rear;i--){
    printf("%d",q[i]);
}
}
int main(){
    int choice;
    do{
        printf("enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enq();
            break;
            case 2:
            deq();
            break;
            case 3:
            display();
            break;
            default:
            printf("invalid");
        }
    }while(choice!=0);
}