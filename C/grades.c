#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks of the student=");
    scanf("%d",&marks);
    switch (marks)
    {
        case 91 ... 100:
        {
            printf("A grade");
            break;
        }
        case 81 ... 90:
        {
            printf("B grade");
         
            break;
        }
        case 71 ... 80:
        {
            printf("C grade");
         
            break;
        }
        case 61 ... 70:
        {
            printf("D grade");
         
            break;
        }
        case 1 ... 60:
        {
            printf("F grade");
         
            break;
        }
        default:
        {
            printf("Invalib Input, Try Entering marks between 1-100");
        }
    }

    return 0;
}