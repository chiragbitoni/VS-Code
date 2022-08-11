#include<stdio.h>
int factorial(int fact);
int main(){
    int n,fact;
    printf("Enter a number = \n");
    scanf("%d", &n);
    fact =factorial(n);
    printf("Factorial =%d \n", fact);
    return 0;
}
int factorial(int fact){
    if(fact==0 || fact==1)
    return 1;
    else
    return fact*factorial(fact-1);
}