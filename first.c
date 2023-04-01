// WAP to print hello world in C program

#include<stdio.h> // link section
#define PI 3.14
 int main()
{
  float r,area;
	printf("enter radius number:");
	scanf("%f",&r);
	area= PI*r*r;
	printf("area of circle is: %.2lf",area);
}
