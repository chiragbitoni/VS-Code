#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    c = a+b;
    printf("Result after addition = %d", c);
    return 0;
}
