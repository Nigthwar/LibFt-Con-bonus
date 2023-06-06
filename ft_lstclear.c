/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:55:29 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/04 16:55:37 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*out;

	out = *lst;
	if (lst || *lst)
	{
		while (*lst)
		{
			*lst = out->next;
			del(out->content);
			free(out);
			out = *lst;
		}
	}
}
