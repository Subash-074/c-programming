/*Create a program to define a constant for the mathematical value pi(3.1459)and use it to calculaate and print the circumference of a circle with a radius input form user.*/
 #include<stdio.h>
int main()
{
const float PI=3.14159;
int radius;
printf("Radius of circle:");
scanf("%d", &radius);

printf("The circumferenc of circle is:%f", 2 * PI * radius);
return 0;





}