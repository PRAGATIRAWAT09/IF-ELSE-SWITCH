#include<stdio.h>
void main()
{
char ch,a,e,i,o,u;
clrscr();
printf("ENTER A CHARACTER:");//check whether the character is a vowel or a consonant.
SCANF("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  printf("The character %c is a vowel.",ch);
else
  printf("The character %c is a consonant.",ch);
getch();
}