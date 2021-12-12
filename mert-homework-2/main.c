#include <stdio.h>
#include <stdlib.h>

void intro_ekrani() { //my signature move in C codding :)
  printf("\n----------------------------------\n");
  printf("| Systems Programming Homework 2 |");
  printf("\n----------------------------------\n");
  printf("|     Made By: Mert Altuntas     |");
  printf("\n----------------------------------\n");
  printf("|\t  ID:   1804010005       |");
  printf("\n----------------------------------\n\n\n");

  printf("Loading  ");
  int j, a;
  for (a = 0; a <= 5; a++) {
    printf(".");
    for (j = 0; j <= 120000000; j++);
  }
  
}

struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;

node * first = NULL;
node * last = NULL;

void list(){
    node* temporary = first;
    while (temporary != NULL)
    {
        printf("%d->", temporary->data);
        temporary = temporary -> next;
    }
    printf("NULL\n\n");
}

//Stack

void push(int sayi){
    if (first == NULL) 
    {
        node * newNode = malloc(sizeof(node));
        newNode -> data = sayi;
        newNode -> next = NULL;
        first = newNode;
        last = newNode;
    }
    else
    {
        node * newNode = malloc(sizeof(node));
        newNode -> data = sayi;
        newNode -> next = first;
        first = newNode;
    }
    
}


void pop(){
    node * temporary;
    printf("%d ..cikariliyor\n\n", first->data);
    temporary = first;
    first = first -> next;
    free(temporary);
}

int isEmpty(){ 
    return first == NULL;
}

//Queue

void enqueue(int sayi){
    if (first == NULL)
    {
        node * newNode = malloc(sizeof(node));
        newNode -> data = sayi;
        newNode -> next = NULL;
        first = newNode;
        last = newNode;
    }
    else
    {
        node * temporary = malloc(sizeof(node));
        temporary -> data = sayi;
        last -> next = temporary;
        temporary -> next = NULL;
        last = temporary;
    }
    
}

void dequeue(){
    node* temporary = first;
    first = first->next;
    printf("%d ..cikariliyor\n", temporary->data);
    free(temporary);
    system("pause");
}

int main(){
    intro_ekrani();
    main:
    while (1)
    {
        int secim;
        int capacity;
        printf("\n\nStack için 1'e, Queue için 2'ye basiniz : \t");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1: //stack
            x :
            printf("\n\n");
            list();
            while (1)
            {
                int secim2;
                printf("Push icin 1'e, Pop icin 2'ye, bir onceki menu için 3'e basiniz : \t");
                scanf("%d", &secim2);
                if (secim2 == 1) //push
                {
                    printf("Kaç sayi gireceksiniz : \t");
                    scanf("%d", &capacity);
                    for(int i = 1; i <= capacity; i++)
                    {
                        int num;
                        printf("Sayi giriniz :\t");
                        scanf("%d", &num);
                        push(num);
                    }   
                    goto x;
                }
                else if(secim2 == 2) //pop
                {
                    if(isEmpty()){
                        printf("\n\nStack'iniz şuanda boş.\n\n");
                    }
                    else
                    {
                        pop();
                        goto x;
                    }
                }
                else
                {
                    goto main;
                }
                goto main;
            }
            break;

        case 2: //queue
            y :
            printf("\n\n");
            list();
            while (1)
            {
                int secim2;
                printf("Enqueue icin 1'e, Dequeue icin 2'ye, bir onceki menu için 3'e basiniz : \t");
                scanf("%d", &secim2);
                if (secim2 == 1) //enqueue
                {
                    printf("Kaç sayi gireceksiniz : \t");
                    scanf("%d", &capacity);
                    for(int i = 1; i <= capacity; i++)
                    {
                        int num;
                        printf("Sayi giriniz :\t");
                        scanf("%d", &num);
                        enqueue(num);
                    }   
                    goto y;
                }
                else if(secim2 == 2) //dequeue
                {
                    if(isEmpty()){
                        printf("\n\nQueue'iniz şuanda boş.\n\n");
                    }
                    else
                    {
                        dequeue();
                        goto y;
                    }
                }
                else
                {
                    goto main;
                }
                goto main;
            }
            break;    
        
        default:
            break;
        }
    }
    
}