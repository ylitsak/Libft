/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:02:47 by saylital          #+#    #+#             */
/*   Updated: 2024/05/08 09:34:34 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index_tracker;

	i = 0;
	index_tracker = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			index_tracker = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	if (index_tracker != -1)
		return ((char *)&s[index_tracker]);
	return (NULL);
}
