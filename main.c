/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
WAP to find perimeter of a circle given radius
Name:Raksha
*/
#include <stdio.h>
int main()

{ 

    float radius,perimeter;
    printf("\nEnter the radius of the circle");
    scanf("%f",&radius);
    perimeter=2*3.14*radius;
    
    printf("Perimeter of the circle =%2f",perimeter);
    return 0;
}
