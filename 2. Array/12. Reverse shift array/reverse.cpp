#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[8];
    int size;
    int length;
};

void reversearray(struct myarray arr){
    int i,j,temp;

    cout<<"before"<<endl;
    for(i=0;i<=arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
    

     for (i = 0, j = arr.length - 1; i < j; i++, j--) {
        temp = arr.A[i];
        arr.A[i] = arr.A[j];
        arr.A[j] = temp;
    }
    
    cout<<"after"<<endl;
    for(i=0;i<=arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
int main(){
    struct myarray arr{{1,3,5,7,9,2,4,6},8,8};
    reversearray(arr);

return 0;
}