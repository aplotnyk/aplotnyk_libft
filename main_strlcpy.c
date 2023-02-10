/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:08:13 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/06 17:38:20 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "ft_strlcpy.c"
#include <bsd/string.h>

int main()
{
    const char *src = "String 1";
    char dst[15] = "String 55";
    size_t result = ft_strlcpy(dst, src, 10); 
    const char *asrc = "String 1";
    char adst[15] = "String 55";
    size_t aresult = strlcpy(adst, asrc, 10);
    
    printf("Source string length: %zu\n", result);
    printf("Source string after strlcpy: %s\n", src);
    printf("Destination string after ft_strlcpy: %s\n", dst);

    printf("Source string length: %zu\n", aresult);
    printf("Source string after strlcpy: %s\n", asrc);
    printf("Destination string after strlcpy: %s\n", adst);

    return (0);
}