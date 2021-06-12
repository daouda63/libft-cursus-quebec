/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:05:25 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/11 12:32:19 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((int)len + 1);
	if (!dest || !s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (dest);
	while (i < (int)len)
	{
		dest[i] = (s[start]);
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
