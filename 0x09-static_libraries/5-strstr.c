#include "main.h"

/**
 ** _strstr - locates a substring
 ** @haystack: the string of source
 ** @needle: the substring
 ** Return: pointer to the beginning of the located substring
 **/
char *_strstr(char *haystack, char *needle)
{
	char *stacks, *needs;

	while (*haystack != '\0')
	{
		stacks = haystack;
		needs = needle;
		while (*haystack != '\0' && *needs != '\0' && *haystack == *needs)
		{
			haystack++;
			needs++;
		}
		if (!*needs)
			return (stacks);
		haystack = stacks + 1;
	}
	return (0);

}
