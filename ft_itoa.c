/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:42:09 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 14:25:48 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nums(long x)
{
	size_t	a;

	a = 0;
	if (x <= 0)
	{
		a++;
	}
	while (x != 0)
	{
		x /= 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = count_nums(n1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n1 == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}
