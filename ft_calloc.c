/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:40:42 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:52:32 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	void	*x;

	x = malloc(nmem * size);
	if (!x)
		return (0);
	ft_bzero(x, nmem * size);
	return (x);
}
