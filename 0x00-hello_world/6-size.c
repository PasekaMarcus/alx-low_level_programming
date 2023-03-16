#include <stdio.h>
/**
 * main -a C program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
printf("Size of an char: %lu byte(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
