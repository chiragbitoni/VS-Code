#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int A[5];
    int n;
};

void fun(struct Rectangle r){
    r.A[0]=3;
    r.A[4]=11;
    for(int i =0;i<5;i++)
    printf("%d ",r.A[i]);
}

int main(){ 
    struct Rectangle r={{2,4,6,8,10},5};
    for(int i =0;i<5;i++)
    printf("%d ",r.A[i]);
    cout<<endl;
    fun(r);
    
    return 0;
}