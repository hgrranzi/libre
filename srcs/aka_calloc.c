/* *********************************************** */
/*                                                 */
/*       by: hgrranzi <vkh.mariia@gmail.com>       */
/*                                                 */
/* *********************************************** */

#include "aka_stdlib.h"

void	*calloc(size_t count, size_t size)
{
	size_t			len;
	size_t			i;
	unsigned char	*ptr;

	len = count * size;
	i = 0;
	ptr = malloc(len);
	if (ptr)
	{
		while (i < len)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return ((void *)ptr);
}
