/**
 * reverse_array - This is a function that reverses an array of integers
 *
 * @a: a pointer to int array
 * @n: this is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, c, d;

	c = 0;
	d = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (c < d)
	{
		temp = a[c];
		a[c] = a[d];
		a[d] = temp;
		c++;
		d--;
	}
}
