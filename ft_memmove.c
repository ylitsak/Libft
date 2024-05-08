/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:06:17 by saylital          #+#    #+#             */
/*   Updated: 2024/05/07 09:50:23 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (d);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (d);
}
