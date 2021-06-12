/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:05:00 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/07 08:43:37 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		v;
	char	*src;
	char	*ch;

	i = 0;
	j = 0;
	v = 0;
	src = (char *)haystack;
	ch = (char *)needle;
	v = ft_strlen(ch);
	if (len == 0 || ((int)ft_strlen(src) == v) || v == 0)
		return (src);
	while (i < (int)len)
	{
		if (src[i] == ch[j])
		{
			j++;
			if (j == v)
				return (src + i - 1);
		}
		i++;
	}
	return (NULL);
}
