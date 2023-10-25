/**
 * _is_prime_number - A function that checks if a
 * number is prime or not
 *
 * @n : input number
 *
 * Return: return 0 or 1
*/

int is_prime_number(int n)
{
int temp;
int res;

temp = 1;

	if (temp > 9)
	{
		return (-1);
	}
	else
	{
		if ((n % temp) == 0)
		{
			res = 0;
		}
		else
		{
			res = 1;
		}
	}
	is_prime_number(n + 1);
	return (res);
}
