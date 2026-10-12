#include<stdio.h>

int main(void)
{
    double length, breadth, radius, base, height;
    const double PI = 3.14159;

    printf("Enter rectangle length and breadth:");
    scanf("%If %If",&length, &breadth);

    printf("Rectangle area = %.2If\n",length*breadth);
    printf("Rectangle perimeter = %.2If\n",2*(length+breadth));

    printf("Enter circle radius:");
    scanf("%If",&radius);

    printf("Circle area = %.2If\n",PI*radius*radius);
    printf("Circle circumference = %.2If\n",2*PI*radius);

    printf("Enter Triangle base and height:");
    scanf("%If %If",&base, &height);
    printf("Triangle area = %.2If\n",0.5*base*height);

    return 0;
}