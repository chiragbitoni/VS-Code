#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;
int main(){
    comp c1;
    c1.real=3;
    c1.complex=5;
    printf("Your complex number = %d+%di"  , c1.real,c1.complex);
    return 0;
}