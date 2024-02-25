#include<stdio.h>
int main()
{
system("cls");
char str[10];
printf(" enter a string having upper case letter only");
scanf("%[A-Z]",str);
printf("string is%s",str);
return 0;

}