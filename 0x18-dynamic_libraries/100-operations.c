/**
 * add - Add two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two integers
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The result of the division (integer division)
 *         Returns 0 when division by zero is attempted
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);  /* Handle division by zero */
	}
}

/**
 * mod - Calculate the remainder of division of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of the division
 *         Returns 0 when division by zero is attempted
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);  /* Handle modulo by zero */
	}
}
