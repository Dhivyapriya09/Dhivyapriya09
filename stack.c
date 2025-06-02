#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
void push(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void pop(){
   
    struct Node* temp=head;
    head=temp->next;
    free(temp);
}
void peek(){
    printf("%d",head->data);
}
void empty(){

    if(head!=NULL){
    printf("is empty");
    }
    else
    {
        printf("no");
    }
}
void reverse(){
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
printf("NULL");
    while(temp!=NULL)
    {
        printf("hi\n");
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void display(){
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
printf("NULL");
}

int main(){
    push(8);
    push(7);
    push(6);
    push(5);
    //display();
   // printf("\n");
    reverse();
}
