#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],s1[50],s2[50]; int i,j;
	printf("Enter the string to split: \n");
	scanf("%s",&str);
	char b;
	printf("Enter the letter from which you want to split: \n");
	scanf("%s",&b);
	for(i=0;str[i]!=b;i++)
	{
		s1[i]=str[i];
	}
	for(j=0;str[i]!='\0';i++,j++)
	{
		s2[j]=str[i];
	}
	printf("Sentence 1: %s\n",s1);
	printf("Sentence 2: %s\n",s2);
}
