//Write a program to convert a given string into Lowecase
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[50],b;
    int a;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    printf("\n");
    printf("The Lowecase of Your String: ");
    for(a=0;str[a];a++)
    {
        b = tolower(str[a]);
        printf("%c",b);
    }
}
