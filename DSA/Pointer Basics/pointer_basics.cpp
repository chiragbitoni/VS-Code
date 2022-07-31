#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;

    // cout << a << endl;
    // printf("Using Pointer %d",p);

    int *p1;
    char p2;
    float*p3;
    double*p4;
    struct Rectangle*p5;
    cout << sizeof(p1)<< endl;
    cout << sizeof(p2)<< endl;
    cout << sizeof(p3)<< endl;
    cout << sizeof(p4)<< endl;
    cout << sizeof(p5)<< endl;

    return 0;
}
