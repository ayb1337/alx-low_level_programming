#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: name to print
 * @f: function to be used
 * Return: void
*/


void print_name(char *name, void (*f)(char *))
{
f(name);
}
