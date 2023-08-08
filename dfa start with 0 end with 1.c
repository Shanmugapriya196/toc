#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char st[100];
printf("enter the string:");
scanf("%s",&st);
l=strlen(st);
if(st[0]=='0' && st[l-1]=='1')
printf("string is accepted for the given condition");
else
printf("string is not accepted for the given condition");

}
