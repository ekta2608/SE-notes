// Write a program to convert days into years and years into days.

#include<stdio.h>
int main()
{
	float days,year,day,week;
	printf("enter days : ");
	scanf("%f",&days);
	day=(days-(year*365)+(week*7));
	year=(days/365);
	
	printf("day = %.2lf ",day);
	printf("year = %.2lf",year);
}
