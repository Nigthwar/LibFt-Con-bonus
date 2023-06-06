/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:34:14 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:55 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	x;

	if (n == 0)
	{
		return (0);
	}
	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x] && x < n - 1)
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
