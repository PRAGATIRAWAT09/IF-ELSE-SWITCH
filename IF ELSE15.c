#include<stdio.h>
void main()
{
int A,B,C;
clrscr();
printf("ENTER THE ANGLES OF A TRIANGLE:");//check whether a triangle is valid or not
scanf("%d,%d,%d",&A,&B,&C);
if(A+B+C=180)
  printf("The triangle is valid.");
else
  printf("The triangle is invalid.");
getch();
}