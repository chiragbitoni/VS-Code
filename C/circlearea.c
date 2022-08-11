#include<stdio.h>

int main(){
    int radius;
    float pi=3.14;
    float area;
    printf("Enter the radius of circle = ");
    scanf("%d", &radius);
    area = pi*radius*radius;
    printf("Area of circle = %f", area);
   return 0;
}