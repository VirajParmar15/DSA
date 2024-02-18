#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
int A[]={2,4,6,8,10};
int B[5]={1,3,5,7,9};
int C[4]={1,2,3};

for(int i=0;i<=5;i++){
    cout<<B[i]<<endl;
}
cout<<sizeof(A)<<endl;
cout<<sizeof(B)<<endl;
cout<<sizeof(C)<<endl;
return 0;
}