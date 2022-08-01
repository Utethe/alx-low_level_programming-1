/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary to convert
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (w = 0; b[w]; w++)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		res = 2 * res + (b[w] - '0');
	}
	return (res);
}
