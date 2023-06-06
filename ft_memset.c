/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:49:38 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:53:29 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*str;

	x = 0;
	str = (unsigned char *)b;
	while (x < len)
	{
		str[x] = (unsigned char)c;
		x++;
	}
	return (str);
}
