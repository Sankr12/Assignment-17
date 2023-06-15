//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<ctype.h>
int main()
{
  char a,str[100];
  int i,b=0;
  printf("Enter Your String: ");
  fgets(str,100,stdin);
  printf("\n");
  printf("Enter a character which you want to count: ");
  scanf("%c",&a);
  printf("\n");
  for(i=0;str[i];i++)
  {
      if(str[i]==a)
      {
          b++;
      }
  }
  printf("The occurence of %c in the given string is %d",a,b);
  printf("\n");
  return 0;
}
