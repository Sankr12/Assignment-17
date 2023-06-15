//write a program to count vowel in a given string
#include<stdio.h>
#include<ctype.h>
int main()
{
  char a,str[100];
  int i,b=0;
  printf("Enter Your String: ");
  fgets(str,100,stdin);
  printf("\n");

  for(i=0;str[i];i++)
  {
      char c = tolower(str[i]);
      if(c=='a' || c=='e' || c=='i' || c=='i' || c=='o' || c=='u')
      {
          b++;
      }
      printf("%c",c);
  }
  printf("The Occurence of vowel in given string = %d",b);
  printf("\n");
  return 0;
}

