//Write a function to reverse a string
#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str,50,stdin);
    reverse_string(str);
}
void reverse_string(char str[])
{
    int i,a;
    int length = strlen(str);
    printf("\nReverse of String: ");
    for(i=length-2;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
