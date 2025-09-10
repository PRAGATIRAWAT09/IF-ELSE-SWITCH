#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("ENTER A CHARACTER:");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
 printf("The character %c is an alphabet.",ch);
else
 printf("The character %c is not an alphabet.",ch);
getch();
}