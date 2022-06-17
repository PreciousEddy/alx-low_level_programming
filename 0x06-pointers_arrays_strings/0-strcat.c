#include "holberton.h"

/**
 * _strcat -concatenates two strings
 * @dest: string one
 * @src: string two
 * return: concatenated string
 */



char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *cpy;

	for (; dest[len] != '\0'; len++);

	cpy = dest + len;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';


		return (des)t;
	
}

