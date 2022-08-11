#include<stdio.h>
int factorial(int n) {
	if (n == 0)
		return (1);
	else
		return factorial(n - 1) * n;
}
int main() {
	int n;
	n = 5;
	printf("%d is factorial of %d", factorial(n), n);
	return 0;
}