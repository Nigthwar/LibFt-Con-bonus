/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:38:50 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:42 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sestring;
	size_t	size;

	size = ft_strlen(s);
	if (size <= start)
	{
		return (ft_strdup(""));
	}
	if (size - start < len)
	{
		len = size - start;
	}
	sestring = (char *)malloc(len + 1);
	if (!sestring)
	{
		return (0);
	}
	ft_memcpy(sestring, s + start, len);
	sestring[len] = '\0';
	return (sestring);
}
