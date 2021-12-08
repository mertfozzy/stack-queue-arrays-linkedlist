/* Alperen Demirtürkoğlu
    1804010006 */

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node node;

node* head = NULL;
node* rear = NULL;

void printList(){
    node* temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}

void enqueue(int val){
    if(head == NULL){
        node* newNode = malloc(sizeof(node));
        newNode->data = val;
        newNode->next = NULL;
        head = newNode;
        rear = newNode;
    }
    else{
        node* temp = malloc(sizeof(node));
        temp->data = val;
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
    
}

void dequeue(){
    if(head == NULL){
        printf("List is empty...\n\n");
        system("pause");
    }
    else{
        node* temp = head;
        head = head->next;
        printf("Item dequeued ->%d\n", temp->data);
        free(temp);
        system("pause");;
    }
}

void push(int val){
    if(head == NULL){
        node* newNode = malloc(sizeof(node));
        newNode->data = val;
        newNode->next = NULL;
        head = newNode;
        rear = newNode;
    }
    else{
        node* newNode = malloc(sizeof(node));
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
}

void pop(){
    node* temp;
    if(head == NULL){
        printf("List is empty...\n\n");
        system("pause");;
    }
    else{
        printf("Item popped -> %d\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
        system("pause");;
    }
}

int main(){

    int op;
    int num;

    Menu:
    system("clear");
    printList();
    printf("Enter the operation number...\n");
    printf("1) Push to list\n");
    printf("2) Pop to list\n");
    printf("3) Enqueue to list\n");
    printf("4) Dequeue to list\n");
    printf("5) EXIT\n");
    printf("INPUT: ");
    scanf("%d",&op);

    switch(op){

        case 1:
            printf("Enter the data of node as int number to push: ");
            scanf("%d",&num);
            push(num);
            goto Menu;
            break;

        case 2:
            pop();
            goto Menu;
            break;

        case 3:
            printf("Enter the data of node as int number to enqueue: ");
            scanf("%d",&num);
            enqueue(num);
            goto Menu;
            break;

        case 4:
            dequeue();
            goto Menu;
            break;

        case 5:
            exit(0);

        default:
            printf("INVALID INPUT...\n\n");
            goto Menu;
            break;

    }


    return 0;
}