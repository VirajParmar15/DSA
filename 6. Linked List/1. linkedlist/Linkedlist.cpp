#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    node *first = new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        node *t = new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int main(){

    int A[]=3,5,7,10,15;
    create(A,5);

return 0;
}