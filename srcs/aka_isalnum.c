/* *********************************************** */
/*                                                 */
/*       by: hgrranzi <vkh.mariia@gmail.com>       */
/*                                                 */
/* *********************************************** */

#include "aka_ctype.h"

int		aka_isalnum(int c)
{
	return (aka_isalpha(c) || aka_isdigit(c));
}
