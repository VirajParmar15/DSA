#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int i,number,total=0;

cout<<"enter the number for table";
cin>>number;

    for(i=1;i<=10;i++){
    cout<<number<<"*"<<i<<"="<<number*i<<endl;
    total += number*i;
    }
    cout<<"Total = "<<total;

return 0;
}

