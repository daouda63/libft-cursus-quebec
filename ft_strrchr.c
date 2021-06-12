/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:05:10 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/04 13:57:16 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	j = 0;
	k = 0;
	p = (char *)s;
	while (p[i] != '\0')
	{
		if (p[i] == c)
		{
			j = j + i;
			k = j - k + 1;
			j = k;
		}
		i++;
	}
	if (k != 0)
		return (p + k - 1);
	if (c == '\0')
		return (p + i);
	return (NULL);
}
