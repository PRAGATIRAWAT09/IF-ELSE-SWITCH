#include<stdio.h>
void main()
{
int age;
clrscr();
printf("ENTER YOUR AGE:");//check whether a person is eligible to vote.
scanf("%d",&age);
if(age>=18)
  printf("You are eligible to vote.");
else
  printf("You are underage.");
getch();
}