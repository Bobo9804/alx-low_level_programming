#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Prints a formatted string to the standard output stream.
 *
 * @format: A pointer to the format string to be printed.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int _printf(const char *format, ...)
{
    va_list args;   /* A list of arguments to be printed */
    int printed_chars = 0;  /* The number of characters printed */

    char c; /* A single character to be printed */

    /* Start the variable argument list processing */
    va_start(args, format);

    /* Loop through the format string */
    while (*format != '\0') {
        /* If a '%' character is found, start processing a format specifier */
        if (*format == '%') {
            /* Advance the format pointer to the next character */
            format++;

            /* Determine the format specifier type */
            switch (*format) {
                /* If the format specifier is 'c', get a char argument from the list and print it */
                case 'c':
                    c = va_arg(args, int);
                    putchar(c);
                    printed_chars++;
                    break;
                /* If the format specifier is 's', get a char* argument from the list and print it */
                case 's':
                    printed_chars += printf("%s", va_arg(args, char *));
                    break;
                /* If the format specifier is '%', print a single '%' character */
                case '%':
                    putchar('%');
                    printed_chars++;
                    break;
                /* If the format specifier is unknown, print the '%' character followed by the unknown specifier */
                default:
                    putchar('%');
                    putchar(*format);
                    printed_chars += 2;
                    break;
            }
        } else {
            /* If the current character is not a '%', print it */
            putchar(*format);
            printed_chars++;
        }

        /* Move to the next character in the format string */
        format++;
    }

    /* End the variable argument list processing */
    va_end(args);

    /* Return the number of printed characters */
    return printed_chars;
}
