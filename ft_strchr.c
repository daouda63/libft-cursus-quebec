/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:47:44 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/04 11:28:00 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*p;

	i = 0;
	p = (char *)s;
	ch = (char)c;
	while (p[i] != '\0')
	{
		if (p[i] == ch)
		{
			return (p + i);
			break ;
		}
		i++;
	}
	if ((p[i] == '\0') && (ch == '\0'))
		return (p + i);
	return (NULL);
}
