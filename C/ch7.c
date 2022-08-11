#include<stdio.h>

int main(){
    float i=1;
    float *ptr=&i;
    printf("The value of ptr is = %u \n", ptr);
    ptr = ptr + 1;
    printf("The value of ptr after adding number is = %u \n", ptr);
    ptr = ptr - 1;
    printf("The value of ptr after subtacting number is = %u \n", ptr);
    float j = 2;
    float *ptr2 = &j;
    printf("The value after subtraction pointer from a pointer  = %u \n", ptr-ptr2);
    if(ptr==ptr2)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }
    return 0;
}