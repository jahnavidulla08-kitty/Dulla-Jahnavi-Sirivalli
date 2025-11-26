//program to copy one string into another
#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i=0;
	printf("enter string1");
	gets(s1);
	while (s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("the copied string is:");
	puts(s2);
}
