/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:22:45 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/06 18:25:06 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_tolower.c"
#include "libft.h"

int main()
{
	int a = tolower(2);
	int	b = tolower(90);
	int	c = tolower(73);
	int	d = tolower(123);

	int i = ft_tolower(2);
	int	j = ft_tolower(90);
	int	k = ft_tolower(73);
	int	l = ft_tolower(123);	
   
	printf("tolower character 'START OF TEXT': %c\n", a);
	printf("tolower character 'Z': %c\n", b);
	printf("tolower character 'I': %c\n", c);
	printf("tolower character '{': %c\n", d);

	printf("ft_tolower character 'START OF TEXT': %c\n", i);
	printf("ft_tolower character 'Z': %c\n", j);
	printf("ft_tolower character 'I': %c\n", k);
	printf("ft_tolower character '{': %c\n", l);

    return (0);
}