#include "variadic_functions.h"
/**
  *print_all - a function that prints anything
  *@format: is a list of types of arguments passed to the function
  *Return: any arg given based on specified format
  */
void print_all(const char * const format, ...)
{
	int a, check_status;
	char *str;
	va_list spc;

	va_start(spc, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_status = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_status = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_status = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_status = 0;
				break;
			default:
				check_status = 1;
				break;
		}
		if (format[a + 1] != '\0' && check_status == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(spc);
}
