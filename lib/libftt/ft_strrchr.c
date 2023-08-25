/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:24:06 by ppoti             #+#    #+#             */
/*   Updated: 2022/09/24 15:10:23 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*y;
	int		flag;

	y = (char *)s;
	flag = 0;
	if (c == 0)
	{
		while (*y != '\0')
		{
			y++;
		}
		return (y);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			y = s;
			flag = 1;
		}
		s++;
	}
	if (flag == 1)
		return (y);
	return (NULL);
}
