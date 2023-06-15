//Write a program to convert a given string into uppercase
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[50],b;
    int a;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    printf("\n");
    printf("The Uppercase of Your String: ");
    for(a=0;str[a];a++)
    {
        b = toupper(str[a]);
        printf("%c",b);
    }
}
