#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
    (*p).breadth=10;
    printf("Length = %d\nBreadth is = %d\n",(*p).length,p->breadth);
}

int main(){ 
    struct Rectangle r={10,5};
    printf("Length = %d\nBreadth is = %d\n",r.length,r.breadth);
    fun(&r);
    printf("Length = %d\nBreadth is = %d\n",r.length,r.breadth);    
    return 0;
}