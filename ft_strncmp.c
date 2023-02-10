/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:34:19 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/10 20:38:42 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && i < n)
	{
		
	}
}