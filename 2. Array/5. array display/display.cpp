#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array1{
    int *A;
    int size;
    int length;
};

void display(struct array1 arr){
    cout << "Elements are : ";
    for(int i=0 ;i < arr.length ; i++ )
    cout << arr.A[i] << " ";
}
int main(){
    struct array1 arr;
    arr.size=10;
    arr.length=5;
        arr.A=new int[arr.size];
        arr.A[0]=1;arr.A[1]=3;arr.A[2]=5;arr.A[3]=7;arr.A[4]=9;
    
    display(arr);

    delete[] arr.A;

return 0;
}