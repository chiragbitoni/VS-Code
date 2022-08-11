#include<stdio.h>
#include<string.h>
struct bank{
    int acc_no;
    char name[10];
    char ifsc[10];
    int phone_no;
};
int main(){
    struct bank c1;
    c1.acc_no=001;
    strcpy(c1.name,"Chirag\0");
    strcpy(c1.ifsc,"pytm01234\0");
    c1.phone_no=8700;
    printf("Account number = %d\n",c1.acc_no);
    puts(c1.name);
    puts(c1.ifsc);
    printf("Phone number = %d",c1.phone_no);
    return 0;
}