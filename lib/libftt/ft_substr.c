/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:30:37 by ppoti             #+#    #+#             */
/*   Updated: 2022/09/24 17:00:58 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *s, unsigned int start, size_t len)
{
	size_t	i1;
	size_t	i2;
	size_t	len_malloc;

	i1 = start;
	i2 = start;
	len_malloc = 0;
	if (start > ft_strlen(s) - 1)
		len_malloc = 0;
	else if (start < len && len >= ft_strlen(s))
		len_malloc = ft_strlen(s) - start;
	else
		return (len);
	return (len_malloc);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i1;
	size_t		i2;
	size_t		len_malloc;
	char		*dest;

	i1 = 0;
	i2 = 0;
	len_malloc = 0;
	if (!s)
		return (NULL);
	len_malloc = check(s, start, len);
	dest = (char *)malloc(sizeof(char) * len_malloc + 1);
	if (!dest)
		return (NULL);
	while (s[i1])
	{
		if (i1 >= start && i2 < len)
		{
			dest[i2] = s[i1];
			i2++;
		}
		i1++;
	}
	dest[i2] = '\0';
	return (dest);
}
