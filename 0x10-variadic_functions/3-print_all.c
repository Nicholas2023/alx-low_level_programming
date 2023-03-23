#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>



void print_char(va_list arg)
{
	char ltr = va_arg(arg, int);
	printf("%c", ltr);
}


void print_int(va_list arg)
{
	int num = va_arg(arg, int);
	printf("%d", num);
}

void print_float(va_list arg)
{
	float num = va_arg(arg, double);
	printf("%f", num);
}

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printer_t fun[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(fun[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			fun[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

