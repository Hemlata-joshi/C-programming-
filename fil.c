#include<stdio.h>
int main()
{
    FILE  *fp;
    char s[]="I Love Nepal";
    fp=fopen("my file.txt","w");
    for(int i=0;i<strlen(s);i++)
    {fputc(s[i],fp);
    
    }
fclose(fp);
return0;
}