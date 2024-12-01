/*Create a program  to swap two numbers!!!*/
#include<stdio.h>
int main()
{
  int first, second, temp;
  printf("Enter first number:");
  scanf("%d", &first);
  
 printf("Enter second number:");
  scanf("%d", &second);
  
//swapping
temp= first;
first=second;
second=temp;

printf("the valus of first is %d and second is %d", first, second);
return 0;
}
