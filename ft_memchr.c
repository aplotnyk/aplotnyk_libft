/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:12:40 by aplotnyk          #+#    #+#             */
/*   Updated: 2024/02/06 17:50:38 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
searches for the first occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str.
returns a pointer to the matching byte 
or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	i = 0;
	s = str;
	while (c > 127)
		c = c % 128;
	while (i < n)
	{
		if (*s == c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
