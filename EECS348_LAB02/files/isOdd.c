#include "isOdd.h"

int isOdd(int num)
{
	/* Negative odd numbers give -1 for num % 2, so compare against 0. */
	if (num % 2 != 0) {
		return 1;
	}
	return 0;
}
