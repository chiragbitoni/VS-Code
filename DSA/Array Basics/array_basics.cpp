#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    // int A[5];
    // A[0]=12;
    // A[1]=15;
    // A[2]=25;

    // int A[10]={2};

    // // cout<<sizeof(A)<<endl;
    // // cout<<A[8]<<endl;
    // // printf("%d\n",A[2]);

    // for( int x:A)
    // {
    //     cout<<x<<endl;
    // }
    int n;
    cin>>n;
    int A[n];
    A[0]=2;

    for(int x:A)
    {
        cout<<x<<endl;
    }

    return 0;
}