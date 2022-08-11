#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter 4 numbers=");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a<b)
    {
      if(b<c)
        {
            if(c<d)
            {
                printf("%d number is greatest",d);
            }
            else
            {
                printf("%d number is greatest",c);
            }
        }
        else
        {
            printf("%d number is greatest",b);
        }
    }
    else
        {
            printf("%d number is greatest",a);
        }
    
    return 0;
}