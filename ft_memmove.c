/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:55:11 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:53:27 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sour;

	dest = (char *)dst;
	sour = (char *)src;
	if (!dst && !src)
	{
		return (dst);
	}
	if (dst > src)
	{
		while (n--)
		{
			dest[n] = sour[n];
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
