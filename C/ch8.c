#include<stdio.h>
#include<string.h>
int main(){
    char s[]="Chirag is a good boy";
    char s2[]="Chirag is happy ";
    strcat(s,s2);
    printf("%s",s)  ;
}