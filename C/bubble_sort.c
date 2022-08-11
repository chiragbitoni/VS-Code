#include<stdio.h>

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int A[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
                {
                    if(A[j]>A[j+1])
                        {
                            swap(&A[j],&A[j+1]);
                        }
                }
        }
}
int main(){
    int A[]={7,8,6,5,8,9,3,5,2,5};
    int n=10,i;
    BubbleSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}