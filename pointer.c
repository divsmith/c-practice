#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char *pointer;
	char *pointer2;

	strcpy(str, "Hello world!\n");
	pointer = str;
	printf(pointer);

	pointer2 = pointer + 2;
	printf(pointer2);
	strcpy(pointer2, "y you guys!\n");
	printf(pointer);
}