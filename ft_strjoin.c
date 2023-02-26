/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:21:45 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/19 21:16:42 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char	*res;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	res = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (*s1)
	{
		res[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		res[i] = *s2;
		i++;
		s2++;
	}
	res[i] = '\0';
	return (res);
}
