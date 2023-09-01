/**
 * get_endianness - Check the endianess
 *
 * Return: void
 */

int get_endianness(void)
{
	int num;

	num = 2;

	if (num & 1)
	{
		return (0);
	}

	return (1);
}
