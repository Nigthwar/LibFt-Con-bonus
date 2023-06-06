/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:43:39 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:23:06 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	size;

	if (!s1 || !s2)
	{
		return (0);
	}
	size = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(size + 1);
	if (!newstr)
	{
		return (0);
	}
	ft_memcpy(newstr, s1, ft_strlen(s1));
	ft_memcpy(newstr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (newstr);
}
