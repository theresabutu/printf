#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: String formatted to print the arguments
 * @a: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *a, va_list list)
{
	int curr_i = *a + 1;
	int precision = -1;

	if (format[curr_a] != '.')
		return (precision);

	precision = 0;

	for (curr_a += 1; format[curr_a] != '\0'; curr_a++)
	{
		if (is_digit(format[curr_a]))
		{
			precision *= 10;
			precision += format[curr_a] - '0';
		}
		else if (format[curr_a] == '*')
		{
			curr_a++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*a = curr_a - 1;

	return (precision);
}
