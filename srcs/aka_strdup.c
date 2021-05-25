/* *********************************************** */
/*                                                 */
/*       by: hgrranzi <vkh.mariia@gmail.com>       */
/*                                                 */
/* *********************************************** */

#include "aka_string.h"

char	*aka_strdup(const char *s)
{
	char	*new_s;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = aka_strlen(s);
	i = 0;
	new_s = malloc((len + 1) * sizeof(char));
	new_s[len] = '\0';
	if (new_s)
	{
		while (s[i])
		{
			new_s[i] = s[i];
			i++;
		}
	}
	return (new_s);
}
