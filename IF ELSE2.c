#include<stdio.h>
void main()
{
int num;
clrscr();
printf("ENTER A NUMBER:");//check whether a number is odd or even.
scanf("%d",&num);
if(num%2==0)
  printf("The number %d is even",num);
else 
  printf("The number %d is odd",num);
getch();

}
