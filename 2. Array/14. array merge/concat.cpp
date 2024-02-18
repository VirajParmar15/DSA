#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct myarray{
    int A[10];
    int size;
    int length;
};

struct myarray *concat(struct myarray *arr,struct myarray *arrr){
    int i,j,k;
    i=j=k=0;

    struct myarray *arrrr = new myarray;


    while(i < arr->length){
    arrrr->A[k++]=arr->A[i++];
    }

    while(j < arrr->length){
    arrrr->A[k++]=arrr->A[j++];
    }

    arrrr->length=k;
    arrrr->size=10;

    return arrrr;

}

void display(struct myarray *arrrr){

    for(int k=0;k<arrrr->length;k++){
        cout<<arrrr->A[k]<<endl;
    }
}

int main(){
    struct myarray arr{{1,3,5,7,9},10,5};
    struct myarray arrr{{0,2,4,6,8},10,5};
    struct myarray *arrrr;
    arrrr=concat(&arr,&arrr);
    display(arrrr);


return 0;
}