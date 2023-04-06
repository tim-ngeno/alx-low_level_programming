#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the input string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * check_palindrome - checks if string is equal in reverse
 *
 * @s: the string to be checked
 * @a: the smallest iterator
 * @b: the biggest iterator
 *
 * Return: 1 on success
 */
int check_palindrome(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (check_palindrome(s, a + 1, b - 1));
	}
	return (0);
}


/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
