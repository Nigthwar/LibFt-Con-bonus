/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:32:29 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:57 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	x;

	s1 = (char *)s;
	x = 0;
	if (!s || !f)
	{
		return (0);
	}
	s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
	{
		return (0);
	}
	while (x < ft_strlen(s))
	{
		s1[x] = f(x, s[x]);
		x++;
	}
	s1[x] = '\0';
	return (s1);
}
