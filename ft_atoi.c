/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:02:42 by cguerrei          #+#    #+#             */
/*   Updated: 2023/04/28 12:52:26 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	n;

	count = 0;
	sign = 0;
	n = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
	{
		count++;
	}
	if (str[count] == 45 || str[count] == 43)
	{
		if (str[count] == 45)
			sign++;
		count++;
	}
	while ((str[count]) >= 48 && str[count] <= 57)
	{
		n = n * 10 + str[count] - 48;
		count++;
	}
	if (sign % 2 == 1)
		n = -n;
	return (n);
}
