/**
* get_endianness - Checks the endianness of the machine.
*
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	/* If the first byte (lowest address) contains the least significant byte, */
	/* the machine is little endian; otherwise, it's big endian. */
	return ((*c == 1) ? 1 : 0);
}
