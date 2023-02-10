/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:55:31 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/08 20:04:20 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
//#include "ft_strrchr.c"


int	main()
{
	const char str[] = "Test string.S.TRRCHR FUNCTION";
	const char strA[] = "Test string.FT_S.TRRCHR FUNCTION";
	const char ch = '.';
	const char chA = '.';
	char *ret;
	char *retA;

	ret = strrchr(str, ch);
	retA = ft_strrchr(strA, chA);

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", chA, retA);
   
   return(0);
}