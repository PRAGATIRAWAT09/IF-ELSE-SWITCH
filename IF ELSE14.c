#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the age of 3 people.");//find oldest among 3 people.
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
  printf("The first person with age %d is oldest.",a);
else if((b>a)&&(b>c))
  printf("The second person with age %d is oldest.",b);
else
  printf("The third person with age %d is oldest.",c);
getch();
}