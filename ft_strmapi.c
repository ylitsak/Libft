/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:24:36 by saylital          #+#    #+#             */
/*   Updated: 2024/05/07 09:51:57 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	size_t			i;
	unsigned int	index;
	char			*result;

	len = ft_strlen(s);
	i = 0;
	index = 0;
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(index, s[i]);
		i++;
		index++;
	}
	result[i] = '\0';
	return (result);
}
