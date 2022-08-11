#include<stdio.h>
int check_ch(char st[],char c)
{
    int flag=0;
    char *ptr=st;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            flag=1;
        }
        ptr++;
    }
    return flag;
}
int main()
{
    char st[]="ChiragBitoni";
    int flag;
    flag = check_ch(st,'l');
    if(flag==1)
    {
        printf("It is present");
    }
    else if(flag==0)
    {
        printf("Not present");
    }
    return 0;
}