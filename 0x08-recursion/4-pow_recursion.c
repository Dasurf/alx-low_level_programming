/**
 * _pow_recursion - This is a function that returns the power
 * of @x by @y i.e x^y
 *
 *
 * @x: The integer number x
 * @y: The integer power y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	int even_num;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		even_num = _pow_recursion(x, y / 2);
		return (even_num * even_num);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
