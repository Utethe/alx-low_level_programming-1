/**
 * print_name - prints a name using a function
 * @name: name to print
 * @f: function to print the name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
