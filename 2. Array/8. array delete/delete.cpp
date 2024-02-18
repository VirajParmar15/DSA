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

int deleteelement(struct array1 *arr,int index){
    int x=0;
    int i;
    if(index>=0 && index<=arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;

}

int main(){
    struct array1 arr{{1,3,5,7,9},10,5};


    printf("%d\n",deleteelement(&arr,2));
    display(arr);

return 0;
}