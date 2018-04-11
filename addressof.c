#include <stdio.h>

int main()
{
	int x = 5;
	int* ptr;

	ptr = &x;

	printf("ptr = 0x%08x\n", ptr);
	printf("&ptr = 0x%08x\n", &ptr);
	printf("*ptr = 0x%08x\n\n", *ptr);

	printf("x is located at 0x%08x and contains %d\n", &x, x);
	printf("ptr is located at 0x%08x, contains 0x%08x, and points to %d\n", &ptr, ptr, *ptr);
}