#include<stdio.h>
int power(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(m*m,n/2);
    }
    return m*power(m*m,(n-1)/2);
    
}
int main(){
    int n,m;
    m=2;
    n=9;
    printf("%d",power(m,n));
    return 0; 
}