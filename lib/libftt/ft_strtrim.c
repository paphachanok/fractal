/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:32:17 by ppoti             #+#    #+#             */
/*   Updated: 2022/09/23 00:23:19 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const s1, char const *set)
{
	while (*set != '\0')
	{
		if (s1 == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	char	*dest;
	char	*tmp;

	if (!s1 || !set)
		return (NULL);
	front = 0;
	back = ft_strlen(s1);
	while (s1[front] != '\0' && check(s1[front], set))
		front++;
	while (back > front && check(s1[back - 1], set))
		back--;
	dest = (char *)malloc(sizeof(char) * (back - front) + 1);
	if (!dest)
		return (NULL);
	tmp = dest;
	while (front < back)
		*dest++ = *(s1 + front++);
	*dest = '\0';
	return (tmp);
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim("---To---ng----====", "=-"));
// }
