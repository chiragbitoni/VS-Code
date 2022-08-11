#include<stdio.h>
int power(int m,int n){
    int res=1;
    for (int  i = 0; i < n; i++)
    {
      res=res*m;
    }
    return res;
}
int main(){
    int n,m;
    m=2;
    n=9;
    printf("%d",power(m,n));
    return 0; 
}