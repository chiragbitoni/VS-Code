#include<stdio.h>

void fun(int n){
    if(n>0)
    {
        printf("%d ", n);
        fun(n-1);
    }
}
int main(){
    int x=3;
    printf("Calling Function fun");
    fun(x);
return 0;
}
