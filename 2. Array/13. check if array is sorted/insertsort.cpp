#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[10];
    int size;
    int length;
};

void insertsort(struct myarray *arr,int x){
        int i = arr->length - 1;
        if(arr->length==arr->size)
            return;
        while(i>=0 && arr->A[i]>x)
        {
            arr->A[i+1]=arr->A[i];
            i--;
        }
        arr->A[i+1]=x;
        arr->length++;

        for(int n=0;n<=arr->length;n++){
            cout<<arr->A[n]<<endl;
        }

    }

int main(){

struct myarray arr={{2,4,6,8,10,12,14},10,7};
insertsort(&arr,11);
    
return 0;
}
