/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:30:53 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/08 20:02:27 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
// #include "ft_strchr.c"


int	main()
{
	const char str[] = "Test string.STRCHR FUNCTION";
	const char strA[] = "Test string.FT_STRCHR FUNCTION";
	const char ch = '.';
	const char chA = '.';
	char *ret;
	char *retA;

	ret = strchr(str, ch);
	retA = ft_strchr(strA, chA);

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", chA, retA);
   
   return(0);
}