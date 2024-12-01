/*create a program to calculate simple interest!*/
#include<stdio.h>
int main()
{
float p,t,r,si;
printf("enter value of p, t, r");
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r)/100;
printf("The value of si is %f",si);
return 0;
}
