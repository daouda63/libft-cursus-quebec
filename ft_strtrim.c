/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:32:25 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/11 12:50:31 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	gauche(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (k < (int)ft_strlen(s1))
	{
		while (set[i] != '\0')
		{
			while (set[i] == s1[k])
			{
				j++;
				i = 0;
				k++;
			}
			i++;
		}
		if (set[i - 1] != s1[k])
			break ;
		k++;
		i = 0;
	}
	return (j);
}

int	droite(char const *s1, char const *set)
{
	int		a;
	int		b;
	int		c;

	a = ft_strlen(s1);
	b = 0;
	c = 0;
	while (a != 0)
	{
		while (set[c] != '\0')
		{
			while (set[c] == s1[a])
			{
				b++;
				c = 0;
				a--;
			}
			c++;
		}
		if (set[c] != s1[a])
			break ;
		a--;
		c = 0;
	}
	return (b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		a;
	int		i;
	int		c;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	c = gauche(s1, set);
	a = ft_strlen(s1) - (gauche(s1, set) + droite(s1, set));
	dest = malloc(a + 1);
	if (!dest && a < 0)
		return ("");
	if (!dest)
		return (dest);
	while (a != 0)
	{
		dest[i] = s1[c];
		c++;
		i++;
		a--;
	}
	dest[i] = '\0';
	return (dest);
}
