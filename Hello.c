/* WAP to print the given pattern
     1
	 AB
	 123     (Neumeric - Alphabetic triangle)
	 ABCD
	 12345                                 */
#include <stdio.h>
int main()
{
	for(int i = 1;i<=5;i++)
	{
		int a = 1,b = 1;
		for(int j = 1;j<=i;j++)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
		for(int k = 1;k<=i+1;k++)
		{
			char ch = b + 64;
			printf("%c",ch);
			b++;
		}
		printf("\n");
	}
	return 0;
}