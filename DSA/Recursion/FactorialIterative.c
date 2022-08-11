#include<stdio.h>
    
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
    
}
int main() {
	int n;
	n = 5;
	printf("%d is factorial of %d", factorial(n), n);
	return 0;
}