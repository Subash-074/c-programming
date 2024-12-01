/*Create a program that takes two numbers and shows result of all arithmetic operators(+,-,/,%)*/
#include<stdio.h>
int main()
{
  int a,b,sum,dif,mul,div,mod;
  printf("Enter the value of a and b?");
  scanf("%d%d",&a,&b);
  sum=a+b;
  dif=a-b;
  mul=a*b;
  div=a/b;
  mod=a%b;
  printf("The sum is %d,dif is %d,mul is %d, div is %d, mod is %d.",sum,dif,mul,div,mod);
  return 0;
  








}