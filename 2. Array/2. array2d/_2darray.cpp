#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){


int *B[4];

B[0]=new int[4];
B[1]=new int[4];
B[2]=new int[4];

int **C;

C=new int*[3];
C[0]=new int[4];
C[1]=new int[4];
C[2]=new int[4];

C[0][0] = 1; C[0][1] = 2; C[0][2] = 3; C[0][3] = 4;
C[1][0] = 1; C[1][1] = 3; C[1][2] = 5; C[1][3] = 7;
C[2][0] = 2; C[2][1] = 4; C[2][2] = 6; C[2][3] = 8;


int i,j;
for(i=0;i<=2;i++){
    for(j=0;j<=3;j++){
        cout<<C[i][j]<<endl;
    }
}

delete[] C;
return 0;
}

