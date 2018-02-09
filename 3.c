#include<stdio.h>
int main()
{
	int n;
	scanf("%i",&n);
	while(n)
	{
		printf("%i",n%10);
		n/=10;
	}return 0;
}
