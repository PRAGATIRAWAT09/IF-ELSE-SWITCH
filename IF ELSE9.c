#include<stdio.h>
void main()
{
int a;
clrscr();
printf("ENTER A NUMBER:");
scanf("%d",&a);
if((a%5==0)&&(a%11==0))
  printf("The number %d is divisible by both 5 and 11",a);
else
  printf("The number %d is not divisible by both 5 and 11",a);
getch();
}