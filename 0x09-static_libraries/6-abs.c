#include "main.h"
/**
 * _abs - computes absolute value
 * @c: the number computed
 *
 * Return:Absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	else
	{
		return (c);
	}
}
