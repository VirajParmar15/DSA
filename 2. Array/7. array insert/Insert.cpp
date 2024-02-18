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

void insert(struct array1 *arr,int index,int x)
{
    if(arr->length>=0 && index <= arr->size)
    {
        for(int i=arr->length; i>index; i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
int main(){
    struct array1 arr{{1,3,5,7,9},10,5};
    insert(&arr,3,13);
    display(arr);

return 0;
}