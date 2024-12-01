/*Create a program to create compound interest!!*/
#include<stdio.h>
int main()
{
float P,r,t,ci;
printf("value of p,r,t");
scanf("%f%f%f",&P,&t,&r);
ci=P(1+r/100)*t;
printf("The compuond interest is%f",ci);
return 0;
}