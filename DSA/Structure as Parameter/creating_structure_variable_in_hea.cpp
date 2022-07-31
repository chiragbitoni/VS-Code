#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=10;

    return p;
}

int main(){
    struct Rectangle *ptr=fun();
    cout<<ptr->length<<endl<<ptr->breadth;
    return 0;
}