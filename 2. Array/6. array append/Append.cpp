#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array1{
    int A[10];
    int size;
    int length;
};

void display(struct array1 arr){
    cout << "Elements are : ";
    for(int i=0 ;i < arr.length ; i++ )
    cout << arr.A[i] << " ";
}
void append(struct array1 *arr,int x){
    if(arr->size>arr->length){
        arr->A[arr->length++]=x;
    }
}

int main(){
    struct array1 arr{{1,3,5,7,9},10,5};
    append(&arr,11);
    display(arr);

return 0;
}