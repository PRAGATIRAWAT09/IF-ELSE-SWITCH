#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER THE SIDES OF A TRIANGLE:");
scanf("%d,%d,%d",&a,&b,&c);
if((a==b)&&(b==c))
  printf("The triangle is an Equilateral triangle.");
else if(a==b||b==c||a==c)
  printf("The triangle is an Isosceles triangle.");
else
  printf("The triangle is a Scalene triangle.");
getch();
}
