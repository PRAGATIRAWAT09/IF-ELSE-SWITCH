#include<stdio.h>
void main()
{
int a;
clrscr();//check whether a number is divisible by both 3 and 7.
printf("ENTER A NUMBER:");
scanf("%d",&a);
if((a%3==0)&&(a%7==0))
  printf("The number is divisible by both 3 and 7.");
else 
  printf("The number is not divisible by both 3 and 7.");
getch();

}
