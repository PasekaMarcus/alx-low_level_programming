#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int m;
	float f;
printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu  byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
