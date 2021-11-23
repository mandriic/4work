#include <stdio.h>

void ft_ifi(int *print)

{
	printf("d- 	%d\n", *print);
	printf("i-	%i \n", *print);
}

int main()
{
	int test = 0x012;
	printf("d- 	%d\n", test);
	printf("i-	%i \n", test);
	ft_ifi(&test);

