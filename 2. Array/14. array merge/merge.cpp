#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[10];
    int size;
    int length;
};

void check(struct myarray *arr,struct myarray *arr1){
    for(int i=0;i<arr->length-1;i++){
        if(arr->A[i]>arr->A[i+1]){
            cout<<"array is unsorted"<<endl;
            break;
        }
    }
    for(int j=0;j<arr1->length-1;j++){
        if(arr1->A[j]>arr1->A[j+1]){
            cout<<"array2 is unsorted"<<endl;
            break;
        }
    }
}

struct myarray *merge(struct myarray *arr,struct myarray *arr1){
    int i,j,k;
    i=j=k=0;

    struct myarray *arr2 = new myarray;
    

    while(i<arr->length && j<arr->length){
        if(arr->A[i]<arr1->A[j])
            arr2->A[k++]=arr->A[i++];
        else 
            arr2->A[k++]=arr1->A[j++];
    }
    for (; i < arr->length && k < arr2->size; i++)
        arr2->A[k++] = arr->A[i];
    for (; j < arr1->length && k < arr2->size; j++)
        arr2->A[k++] = arr1->A[j];
    arr2->length=k;
    arr2->size=10;

    return arr2;
        
}

void display(struct myarray *arr2){
    
    int i;

    for( i=0;i<arr2->length;i++){
        cout<<arr2->A[i]<<endl;
    }
}

int main(){

    struct myarray arr{{1,3,5,7,9},10,5};
    struct myarray arr1{{2,4,6,8,10},10,5};
    struct myarray *arr2;
    check(&arr,&arr1);
    arr2=merge(&arr,&arr1);
    display(arr2);


    delete[] arr2;

return 0;
}
