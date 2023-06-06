/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:19:44 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/04 17:10:07 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x <= n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (dest[x])
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
