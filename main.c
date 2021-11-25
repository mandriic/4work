#include "ft_printf.h"
int main()
{
	int test;
	int num;
	int num2;
	test = 123456789;
	int test2 = 1112;
	num = ft_printf("my %p %p ", 0, 0);
	num2 = printf("real %p %p ", 0, 0);
	ft_printf("|%d|\n", num);
	printf("|real%d|", num2);
}