#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray {
    int A[5];
    int size;
    int length;
};

void shift(struct myarray *arr){

    int i;
    for(i=0;i<=arr->length;i++){
        cout<<arr->A[i]<< " ";
    }

    for(i=1;i<=arr->length;i++){
        arr->A[i-1]=arr->A[i];
    }
    arr->length--;

    for(i=0;i<=arr->length;i++){
        cout<<arr->A[i]<< " ";
    }
}
int main(){
    struct myarray arr{{2,4,6,8,1},5,4};
    shift(&arr);
return 0;
}