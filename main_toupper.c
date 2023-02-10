/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:36:56 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/06 18:18:44 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_toupper.c"
#include "libft.h"

int main()
{
	int a = toupper(2);
	int	b = toupper(122);
	int	c = toupper(105);
	int	d = toupper(123);

	int i = ft_toupper(2);
	int	j = ft_toupper(122);
	int	k = ft_toupper(105);
	int	l = ft_toupper(123);	
   
	printf("toupper character 'START OF TEXT': %c\n", a);
	printf("toupper character 'z': %c\n", b);
	printf("toupper character 'i': %c\n", c);
	printf("toupper character '{': %c\n", d);

	printf("ft_toupper character 'START OF TEXT': %c\n", i);
	printf("ft_toupper character 'z': %c\n", j);
	printf("ft_toupper character 'i': %c\n", k);
	printf("ft_toupper character '{': %c\n", l);

    return (0);
}