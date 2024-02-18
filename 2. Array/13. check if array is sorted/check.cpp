#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[10];
    int size;
    int length;
};

void check(struct myarray *arr){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]<arr->A[i+1]){
            cout<<arr->A[i]<<endl;
        }
        else{
            cout<<"array is unsorted";
            break;
        }
        
    }
}
int main(){

    struct myarray arr{{2,4,6,8,10,12,14,19,18,20},10,9};
    check(&arr);


return 0;
}