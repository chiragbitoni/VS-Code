#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(sizeof(int));   
    *ptr=5;
    printf("Value at pointer is = %d\n",*ptr);
    printf("Address of pointer = %d", &ptr);
    free(ptr);
    printf("\n\nAter Free\n\n");
    printf("Value at pointer is = %d\n",*ptr);
    printf("Address of pointer = %d", &ptr);
    return 0;
}   