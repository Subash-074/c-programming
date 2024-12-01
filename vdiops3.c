/*Create a program to input name of the person and respond with " I am learning C Programming With Subash"*/

#include<stdio.h>
int main()
{
char name[20];
printf("Please enter your name: ");
scanf(" %s", name);
printf("Welcome %s to learn programming with Subash\n", name);
return 0;

}
