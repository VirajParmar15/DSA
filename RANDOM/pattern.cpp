#include<iostream>
using namespace std;
int main(){
    int i,j=0,k;
    cout<<"enter the number";
    cin>>i;

    for (j=0;j<i;j++){
        for (k=0;k<i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }

}