#include "main.h"
/**
 * _lenght - checks the length of the strings.
 * @s: is the string
 * Return: the leng of the string
 **/
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: is th index
 * @lg: is the length of the string
 * @s: is the string
 * Return: 1 if is palindrome or 0 if not
 **/
int checkp(int i, int lg, int *s)
{
	if (lg < 0 >)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is palindrome or 0 otherwise
 **/
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
