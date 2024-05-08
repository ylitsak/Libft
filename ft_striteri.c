/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:28:01 by saylital          #+#    #+#             */
/*   Updated: 2024/05/01 11:54:25 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len;
	size_t			i;
	unsigned int	index;

	len = ft_strlen(s);
	i = 0;
	index = 0;
	while (i < len)
	{
		f(index, &s[i]);
		i++;
		index++;
	}
	return ;
}
