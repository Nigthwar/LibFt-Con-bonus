/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:06 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:52:51 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b1;
	size_t			x;

	x = 0;
	b1 = (unsigned char *)s;
	while (x < n)
	{
		if (b1[x] == (unsigned char)c)
			return (b1 + x);
		x++;
	}
	return (0);
}
