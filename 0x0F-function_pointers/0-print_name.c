/**
 * print_name - a function that prints a name
 *
 * @name: the name to be printed
 * @f: a function pointer to a string
 *
 * Return - return nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
