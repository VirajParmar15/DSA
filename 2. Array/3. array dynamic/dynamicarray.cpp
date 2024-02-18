#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    int size;
    int i;

    cout<<"Enter the size of array";
    cin>>size;

    int *p = new int[size];

    cout<<"enter the elements";
    for(i=0;i<size;i++){
        cin>>p[i];
    }

    cout<<"entered elements are: ";
    for(i=0;i<size;i++){
        cout<<p[i]<<"\t";
    }

   
   delete[] p;

    


return 0;
}