#include<iostream>
using namespace std;
int main(){

    int i,j,k,l=1;
    cout<<"enter the number";
    cin>>i;
    for(j=0;j<i;j++){
        for(k=0;k<i;k++){
            cout<<l;
        }
        cout<<"\n";
        l++;
    }
}

