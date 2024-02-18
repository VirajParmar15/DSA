#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n,num=2;

    cout<<"enter the number";
    cin>>n;
/*we have to create function for it.otherwise it shows the repeatative stuff*/
    if(n>2){
       for(int i=num;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<"not prime number";
            }
        }
        cout<<"prime number";
    }
    else if(n==2){
        cout<<"prime number";
    }
    else{
        cout<<"not prime number";
    }

}


    

