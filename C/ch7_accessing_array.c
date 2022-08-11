#include<stdio.h>

int main(){
    int a[4];
    int *ptr=&a[0];
    for(int i=0;i<4;i++)
    {
        printf("Enter %dth  element = \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    for(int i=0;i<4;i++)
    {
        printf("%dth  element = %d\n", i+1, a[i]);
        
    }

    return 0;
}
