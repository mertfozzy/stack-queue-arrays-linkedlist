/* 

Alperen Demirtürkoğlu / 1804010006

This code is written on Visaul Studio Code and
tested with terminal ()./command) and 
VS Code that installed in the virtual box (Centos 7)  */


#include<stdio.h>
#include<stdlib.h>


int i;
void printArray(int arr[], int len){

	for(i = 0; i < len; i++)
	{
		printf("%d --> %d\n",i,arr[i]);
	}
    printf("\n");
}

int front = 0, rear = 0;

void pushArray(int arr[], int len, int value){

    if(arr[len-1] == 0){

        for(i = len; i >= 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = value;
        rear++;
    }
    else{
            printf("Array full...\n");
        }
}

int popArray(int arr[], int len){

    int popped = arr[0];
    
    for(i = 0; i <= len; i++){
        arr[i] = arr[i+1];
    }
    arr[len-1] = 0;
    rear--;

    printf("Value deleted %d\n",popped);
}

void queueArray(int arr[] ,int len, int value){

    if(rear == len){
        printf("Queue is full...\n");
    }
    else{
        arr[rear] = value;
        rear++;
    }
}

int dequeueArray(int arr[], int len){
    int value = arr[0];
    if(front == rear){
        printf("queue is empty...\n");
    }
    else{
        for(i = 0; i <= len; i++){
            arr[i] = arr[i+1];
        }
        arr[len-1] = 0;
        rear--;
    }
    printf("Value deleted %d\n",value);
}

int main(){
    int op;
    int num;
    int A[4] = {};
    Menu:
    
    printArray(A,4);
    printf("Enter the operation number...\n");
    printf("1) Push stack\n");
    printf("2) Pop stack\n");
    printf("3) Enqueue\n");
    printf("4) Dequeue\n");
    printf("5) Exit\n\n");
    printf("INPUT: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("Enter a number to pust into array: ");
        scanf("%d",&num);
        pushArray(A,4,num);
        goto Menu;
        break;
    
    case 2:
        popArray(A,4);
        goto Menu;
        break;

    case 3:
        printf("Enter a number to queue into array: ");
        scanf("%d",&num);
        queueArray(A,4,num);
        goto Menu;
        break;

    case 4:
        dequeueArray(A,4);
        goto Menu;
        break;

    case 5:
        exit(0);
    
    default:
        printf("INVALID INPUT...\n");
        goto Menu;
        break;
    }
    

    return 0;
}