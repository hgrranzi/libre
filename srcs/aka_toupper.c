/* *********************************************** */
/*                                                 */
/*       by: hgrranzi <vkh.mariia@gmail.com>       */
/*                                                 */
/* *********************************************** */

#include "aka_ctype.h"

int	aka_toupper(int c)
{
	if (aka_islower(c))
		c -= 32;
	return (c);
}
