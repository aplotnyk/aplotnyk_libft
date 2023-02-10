/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:37:22 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/08 20:14:31 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (dst[i] && i < s)
		i++;
	if (i < s)
		result = i + j;
	else
		result = s + j;
	j = 0;
	while (dst[j] && i < s - 1 && s != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < s)
		dst[i] = '\0';
	return (result);
}
