//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],a;
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int j = strlen(str);
    printf("\n");
    printf("Reverse of String: ");
    for(i=j-2;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
