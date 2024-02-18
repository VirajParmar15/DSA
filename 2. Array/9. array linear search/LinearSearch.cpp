#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct newarray{

    int A[10];
    int size;
    int length;
};

int LinearSearch(struct newarray arr){
    int key=5;
    int i;
    

    for(i=0;i<arr.length;i++)
        if (arr.A[i] == key){
        return i;
        }
        return -1;

    return 0;
}

int main(){

struct newarray arr={{1,2,3,4,5,6,7,8,9,10},10,10};
cout<<"Linear Search is :"<<LinearSearch(arr);

return 0;
}