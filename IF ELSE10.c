#include<stdio.h>
void main()
{
int a,b,c,d,e,perct;//Find grade of a student based on marks.
clrscr();
printf("ENTER NUMBERS IN 5 SUBJECTS:");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
perct=(a+b+c+d+e)/5;
if(perct>=90)
  printf("The grade of the student is A.");
else if(perct>=80)
  printf("The grade of the student is B.");
else if(perct>=70)
  printf("The grade of the student is C.");
else
  printf("The grade of the student is D.");
getch();
}