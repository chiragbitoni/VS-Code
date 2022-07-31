#include<iostream.h>
using namespace std;
void fun(int n){
    if(n>0)
    {
    printf("%d ", n);
    fun(n-1);
    }
}
int main(){
    int x=3;
    cout<<"Calling Function fun";
    fun(x);
return 0;
}    