#include <stdio.h>

int main()
{
    float radius,height;
    float pi = 3.14;
    float volume;
    printf("Enter the radius of cylinder =");
    scanf("%f", &radius);
    printf("Enter the height of cylinder =");
    scanf("%f", &height);
    volume = pi*radius*radius*height;
    printf("area of circle = %f", volume);
    return 0;
}
