/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saylital <saylital@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:09:44 by saylital          #+#    #+#             */
/*   Updated: 2024/05/08 11:45:38 by saylital         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int n)
{
	if ((unsigned char)n >= 97 && (unsigned char)n <= 122)
	{
		return (n - 32);
	}
	return (n);
}
