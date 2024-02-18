#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[7];
    int size;
    int length;
};

void get(struct myarray arr,int index){
    cout<<"element at the index: "<<arr.A[index];
}

void set(struct myarray arr){
    int i,index;
    cout<<"enter the position index that you want to set"<<endl;
    cin>>index;
    cout<<"value at given index is"<<arr.A[index]<<endl;
    cout<<"enter the value that you want enter at given index"<<endl;
    cin>>i;
    arr.A[index]=i;
    cout<<"now value at given index"<<index<<"is"<<arr.A[index];

    for(int j=0;j<=arr.length;j++){
        cout<<arr.A[j]<<endl;
    }
}

void avg(struct myarray arr){
    int temp=0;

    for(int j=0;j<=arr.length;j++){
        cout<<arr.A[j]<<endl;
    }
    
    for(int i=0;i<=arr.length;i++){
        temp += arr.A[i];
    }
    cout<<temp<<endl;
    cout<<"avg of array"<<temp/arr.length;
}
void max(struct myarray arr){
    int max=arr.A[0];
    int i;
    for(i=0;i<=arr.length;i++){
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    cout<<max;
}

int main(){

    struct myarray arr{{1,2,3,4,5,6,7},7,7};
    //get(arr,4);
    //set(arr);
    //avg(arr);
    max(arr);


return 0;
}