#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring                     * @s: character to be print                                            * @accept: string containing the characters to match                  *                                                                     * Return: return always 0
 * ibytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i]  != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{	
			if (s[i] == accept[j])
			{	
				return (&s[i]);
			}
		}
	}	
return('\0');
}
