/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:54:23 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:53:25 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sour;
	size_t	x;

	x = 0;
	dest = (char *)dst;
	sour = (char *)src;
	if (!dst && !src)
	{
		return (0);
	}
	while (x < n)
	{
		dest[x] = sour[x];
		x++;
	}
	return (dst);
}
