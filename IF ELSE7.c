#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("ENTER A CHARACTER:");//check the entered character is a lowercase, uppercase, digit or a special character.
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
  printf("The character %c is a lowercase letter.",ch);
else if(ch>='A'&& ch<='Z')
  printf("The character %c is an uppercase letter.",ch);
else if(ch>=0 && ch<=9)
  printf("The character entered is a digit.");
else
  printf("The character enter is a special character.");
getch();
}