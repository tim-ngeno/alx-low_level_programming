#include <stdio.h>

/**
 * first - prints a string before execution of main
 *
 * Return: void
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
