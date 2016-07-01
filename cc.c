#include<stdio.h>
#include<string.h>
void main()
{
int a=0,i=0;
char b[100];
printf("\nEnter the line");
gets(b);
while(b[i]!='\0')
{
if(b[i]!=' ')
a++;
i++;
}
printf("\n %d",a);
getch();
}
