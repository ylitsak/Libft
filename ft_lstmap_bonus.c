/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:14:22 by saylital          #+#    #+#             */
/*   Updated: 2024/05/07 11:28:15 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_list;
	t_list	*temp;
	t_list *newlist;

	map_list = lst;
	while (map_list!= NULL)
	{
		temp = map_list->next;
		f(map_list->content);
		newlist = ft_lstnew(map_list);
		if (newlist == NULL)
		map_list = temp;
	}
	return (newlist);
}




/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_list;
	//t_list	*temp;

	map_list = lst;
	ft_lstiter(map_list, f(map_list->content));
	{
		ft_lstnew(map_list->content);
	}
	ft_lstiter(map_list, f(map_list->content));
	{
		del(map_list->content);
		free(map_list);
	}
	return (map_list);
}*/
