#include "new.h"

/**
 * _strcat -concatenates two strings
 * @dest: string one
 * @src: string two
 * return: concatenated string
 */



char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0'


		return dest;
	
}

