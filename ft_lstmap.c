/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:08:58 by cguerrei          #+#    #+#             */
/*   Updated: 2023/05/04 17:09:11 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*salida;
	t_list	*out;

	salida = NULL;
	while (lst)
	{
		out = ft_lstnew((*f)(lst->content));
		if (!out)
		{
			ft_lstclear(&salida, del);
			return (NULL);
		}
		ft_lstadd_back(&salida, out);
		lst = lst->next;
	}
	return (salida);
}
