//Write a program to calculate the length of the string(Without using builtin method).
#include<stdio.h>
int main()
{
    char str[30] = "SandeepKumarVerma";
    int i;
    for(i=0;str[i];i++);
    printf("Length of string = %d",i);
}

