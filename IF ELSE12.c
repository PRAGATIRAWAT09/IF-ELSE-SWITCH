#include<stdio.h>
void main()
{
int age;
clrscr();
printf("Enter your age:");//check whether a person is eligible to drive.
scanf("%d",&age);
if(age>=16)
  printf("You are eligible to drive.");
else
  printf("You are not eligible to drive.");
getch();
}