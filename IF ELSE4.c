#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER THREE NUMBERS:");//finding the largest of three numbers.
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
  printf("The largest number is %d",a);
else if((b>c)&&(b>a))
  printf("The largest number is %d",b);
else
  printf("The largest number is %d",c);
getch();
}