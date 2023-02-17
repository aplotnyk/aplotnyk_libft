/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:48:58 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/15 16:27:16 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		istart;
	int		ires;
	int		srclen;

	istart = 0;
	ires = 0;
	srclen = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (inset(set, s1[istart]))
		istart ++;
	while (inset(set, s1[srclen - 1]) && srclen > istart)
		srclen --;
	res = (char *) malloc(srclen - istart + 1);
	if (!res)
		return (NULL);
	while (istart < srclen)
	{
		res[ires] = s1[istart];
		ires++;
		istart++;
	}
	res[ires] = '\0';
	return (res);
}
