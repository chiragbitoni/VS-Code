#include<stdio.h>

double e(int x,int n){
    double r;
    static double p=1,f=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }   
}
int main()
{
  double x=3;
  double n=100;
  printf("%lf",e(x,n));
  return 0;
}
