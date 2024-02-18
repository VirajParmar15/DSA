#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int *P;

int size;
int i;
cout<<"enter the size of array";
cin>>size;

P=new int[size];

cout<<"enter the elements";
for(i=0;i<size;i++){
    cin>>P[i];
}

cout<<"elements in the array";
for(i=0;i<size;i++){
    cout<<P[i]<<endl;
}

delete[] P;
return 0;
}