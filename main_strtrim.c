/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:06:15 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/15 15:44:17 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_strtrim.c"
#include "ft_strlen.c"

int		main()
{
	char const	*s1 = "startabc1start";
	char const	*s2 = "stststabc2";
	char const	*s3 = " abc3";
	char *s1_res1;
	char *s2_res2;
	char *s3_res3;
	char const	*set1 = "start";
	char const	*set2 = "st";
	char const	*set3 = " ";

	s1_res1 = ft_strtrim(s1, set1);
	s2_res2 = ft_strtrim(s2, set2);
	s3_res3 = ft_strtrim(s3, set3);
	
	printf("|%s|\n", s1_res1);
	printf("|%s|\n", s2_res2);
	printf("|%s|\n", s3_res3);

	return (0);
}
