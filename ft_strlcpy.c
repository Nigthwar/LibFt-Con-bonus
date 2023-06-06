/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:48:41 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:23:02 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	size_t	x;

	x = 0;
	if (n != 0)
	{
		while (src[x] && x < n -1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (ft_strlen(src));
}
