/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:28:18 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/10 20:29:50 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
searches for the first occurrence of the character c
in the string pointed to by the argument str.
returns a pointer to the first occurrence of the character c in the string str,
or NULL if the character is not found
*/

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(str);
	while (i <= n)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
