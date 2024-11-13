#include<stdio.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL,*tail=NULL;
void create(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    head->prev=newnode;
    if(head=NULL){
        head=tail=newnode;
}
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
}
}
void insert_begin(){
    

}