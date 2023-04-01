//documentation part  - WAP to printf hello world in C program/
// link section
#include<stdio.h>
//# define PI  3.14
void main ()
{
	float r,area;
	printf("enter radius:"); // output statement 
	scanf("%f",&r);
	
	area=3.14 *r*r;
	printf("area of circle :%.2lf",area);
}

