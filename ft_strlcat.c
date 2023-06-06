/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:14:00 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:23:04 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	x;
	size_t	j;

	x = 0;
	j = 0;
	while (dest[x] && x < dstsize)
	{
		x++;
	}
	while (src[j] && x + j + 1 < dstsize)
	{
		dest[x + j] = src[j];
		j++;
	}
	if (x < dstsize)
		dest[x + j] = '\0';
	return (x + ft_strlen(src));
}
