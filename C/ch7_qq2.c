#include<stdio.h>

int main(){
    int r= 2;
    int c= 2;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter Value for a[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr[r][c],r,c);
    return 0;
}

void display(int arr[r][c],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Value for a[%d][%d] = ", i,j, arr[i][j]);
            
        }
    }
}