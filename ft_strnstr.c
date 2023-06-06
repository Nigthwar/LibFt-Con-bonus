/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:31:28 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:52 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	j;

	x = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[x] && x < n)
	{
		j = 0;
		while (s1[x + j] == s2[j] && x + j < n)
		{
			if (s2[++j] == 0)
				return ((char *)&s1[x]);
		}
		x++;
	}
	return (0);
}
