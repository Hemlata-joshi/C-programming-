#include<stdio.h>
int main()
{
system("cls");
char str[10];
printf(" enter a string having lower case letter only");
scanf("%[a-z]",str);
printf("string is%s",str);
return 0;

}