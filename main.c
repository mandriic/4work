#include "ft_printf.h"
int main()
{
	char test;
	test = 'D';
	char *test2 = "HIJK";
	ft_printf("abc%cefg%slmnop", test, test2);

}