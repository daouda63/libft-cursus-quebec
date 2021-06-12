/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaouda <gdaouda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:15:44 by gdaouda           #+#    #+#             */
/*   Updated: 2021/06/04 13:48:29 by gdaouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_;
	unsigned char	*src_;

	src_ = (unsigned char *)src;
	dst_ = (unsigned char *)dst;
	i = 0;
	while (i < n && src_[i] != (unsigned char)c)
	{
		dst_[i] = src_[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dst_[i] = src_[i];
		i = i + 1;
		return (dst_ + i);
	}
}
