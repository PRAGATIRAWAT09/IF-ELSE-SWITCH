#include<stdio.h>
void main()
{
 int num;
 printf("ENTER A NUMBER:");
 scanf("%d",&num);
 if num>0
   printf("%d is positive",num);
 elseif num<0
   printf("%d is negative",num);
 else
   printf("It is zero.");
 getch();
}