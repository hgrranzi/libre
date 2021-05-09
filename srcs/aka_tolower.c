/* *********************************************** */
/*                                                 */
/*       by: hgrranzi <vkh.mariia@gmail.com>       */
/*                                                 */
/* *********************************************** */

#include "aka_ctype.h"

int	aka_tolower(int c)
{
	if (aka_isupper(c))
		c += 32;
	return (c);
}
