#include <stdio.h>

main()
{
	int test;
	
	test = getchar() != EOF;

	printf("%d\n", test);
}
