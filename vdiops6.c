/*Define variables for storing user's first name, last name, and age using appropriate naming conventions ans then display them.*/
#include<stdio.h>
int main()
{
char first_name[20];
printf("Your first name:\n");
scanf("%s", &first_name);
char second_name[20];
printf("Your Second Name:\n");
scanf("%s", second_name);
printf("First Name:%s Second Name%s\n",first_name, second_name);
int age;
printf("Age:\n");
scanf("%d", &age);
printf("Your age is:%d\n",age);
return 0;
}