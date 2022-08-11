// #include<stdio.h>

// int main(){
//     int i;
//     i=4;
//     int *j;
//     j= &i;
//     printf("Address of I = %u\n", j);
//     printf("Value off I = %d\n", *j);
//     return 0;
// }

// #include<stdio.h>
// void multi(int *ni);
// int main(){
//     int n = 3;
//     multi(&n);
//     printf("%d", n);
//     return 0;
// }

// void multi(int *ni)
// {
//  *ni = *ni*10;
// }

#include<stdio.h>

int main(){
    int i=2;
    int *p1, **p2;
    p1= &i;
    p2=&p1;
    printf("%d", **p2);
    return 0;
}