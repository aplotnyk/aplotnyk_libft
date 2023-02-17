/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:13:15 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/13 17:15:36 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_memchr.c"

int	main()
{
	const char str[] = "Test string.ft_memchr FUNCTION";
	const char ch = '.';
	char *ret1;
	char *ret2;

	ret1 = memchr(str, ch, 30);
	ret2 = ft_memchr(str, ch, 30);

	printf("String after |%c| is - |%s|\n", ch, ret1);
	printf("String after |%c| is - |%s|\n", ch, ret2);
   
   return(0);
}
