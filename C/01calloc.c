#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the number of Arguments = ");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("Enter the value of element %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the value at element %d is %d\n",i, ptr[i]);
    }
    return 0;
}