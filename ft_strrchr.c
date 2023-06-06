/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:29:33 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:48 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen((char *)s);
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x--;
	}
	return (0);
}
