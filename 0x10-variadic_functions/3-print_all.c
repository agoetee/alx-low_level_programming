#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: a parameter
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char const *f = format;
	char *s = ", ", *str;

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (*f)
	{
		while (*(f + 1) == '\0')
		{
			s = "";
			break;
		}
		switch (*f)
		{
			case 'c':
				printf("%c%s", va_arg(args, int), s);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), s);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), s);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, s);
				break;
		}
		f++;
	}
	va_end(args);
	printf("\n");
}
