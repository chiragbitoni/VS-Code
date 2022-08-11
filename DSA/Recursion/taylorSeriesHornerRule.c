#include<stdio.h>
double e(double x,double n)
{
    static double s=1;
    if(n==0)
        return s;   
     s=1+x*s/n;
    
    return e(x,n-1);    
}
int main()
{
    double x=1,n=100;
    printf("%lf",e(x,n));
    return 0;
}   