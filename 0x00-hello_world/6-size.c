#include <stdio.h>
/**
 * main - a program that prints a size of various types on the computer it is compiled and run on
 *
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char; %1u bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int; %1u bytes(s)\n", (unsigned long)sizeof(b));
printf("size of long int; %1u bytes(s)\n", (unsigned long)sizeof(c));
printf("size of long long int %1u bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float; %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
