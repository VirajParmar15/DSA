#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
/*int main(){
int A[5];

for(int i=0;i<5;i++){
    //cout<<"%u"<<&A[i]<<endl;
    printf("%u\n",&A[i]);
}
return 0;
}*/
int main(){
    int A[]={2,3,4,5,6,7};
    int B[5]={2,3,4,5,6};
    int C[4]={3,4,5};
    int D[3]={3,4,7};
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;
    cout<<sizeof(D)<<endl;
    cout<<sizeof(A)<<endl;

    return 0;
    

}