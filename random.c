#include "random.h"

/* Gets a random number by accessing a unset pointer
 * and dividing it to make the number smaller.
 * Currently the Generator is non-seedable but maybe 
 * in the future it will. And also you can't really 
 * control so if you want a number between 1 and 100
 * you're out of luck with this one!
 */
int* randomint() {
	//Save address in a cache
	cache = &random;

	//Divide it to make it smaller
	cache /= 5536567;

	//Set pointer to newly 'generated' number
	random = &cache;

	/* Remove the minus sign if the number is negative
	 * I don't know why (Maybe I'm not that familiar yet) but
         * an unsigned int doesn't help so I have to do it like
	 * this!
	 */

	if (*random < 0) *random *= -1;

	return (int*) *random;
}
