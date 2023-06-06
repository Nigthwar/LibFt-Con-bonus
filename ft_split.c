/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:09:35 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/04 17:25:48 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_counter(char const *s, char c)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x++] != c && (s[x] == c || s[x] == '\0'))
		{
			y++;
		}
	}
	return (y);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	str = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!str)
		return (0);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			str[n++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	str[n] = 0;
	return (str);
}
