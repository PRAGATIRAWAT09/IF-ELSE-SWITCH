#include<stdio.h>
void main()
{
int num;
clrscr();
printf("ENTER A NUMBER:");
scanf("%d",&num);
if(num%2==0)
  printf("The number %d is even",num);
else 
  printf("The number %d is odd",num);
getch();
}