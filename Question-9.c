//Write a function to compare two strings
#include<stdio.h>
#include<string.h>
int  compare_strings(char str1[], char str2[]);
int main()
{
    char str1[100], str2[100];
    int result;
    printf("Enter the first string: ");
    fgets(str1, 100,stdin);
    printf("\n");
    printf("Enter the second string: ");
    fgets(str2,100,stdin);
    printf("\n");
    result = compare_strings(str1,str2);
    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    printf("\n");
}
int compare_strings(char str1[], char str2[])
{
    int result = strcmp(str1,str2);
    return result;
}
