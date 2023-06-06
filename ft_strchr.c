/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:09:20 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:53:38 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((!*s && (char)c == '\0'))
	{
		return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (0);
}
