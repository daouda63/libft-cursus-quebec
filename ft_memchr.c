/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:35:44 by daou              #+#    #+#             */
/*   Updated: 2021/06/04 14:07:20 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	int				j;
	unsigned char	*f;
	unsigned char	ch;

	i = 0;
	j = (int)n;
	f = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < j)
	{
		if (f[i] == ch)
		{
			return (f + i);
			break ;
		}
		i++;
	}
	return (NULL);
}
