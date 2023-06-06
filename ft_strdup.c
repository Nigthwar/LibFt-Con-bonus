/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:41:18 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:53:40 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*dest;

	len = ft_strlen(s) + 1;
	dest = malloc(len);
	if (!dest)
		return (0);
	ft_memcpy(dest, s, len);
	return ((char *)dest);
}
