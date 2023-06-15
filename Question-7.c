//Write a function to calculate the length of the string.
#include<stdio.h>
#include<string.h>
int strlength(char str[]);
int main()
{
    char str[1000];
    int i,c;
    printf("Enter a string: ");
    fgets(str,1000,stdin);
    printf("\n");
    c = strlength(str);
    printf("The length of the string = %d",c);
    printf("\n");
}
int strlength(char str[])
{
    int i,c;
    for(i=0;str[i];i++);
    return i;
}
