/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:28:32 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/17 21:23:43 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "ft_strlcat.c"
#include <string.h>

int main()
{
    const char src[] = "strlcat testing";
    char dst[] = "String for ";
    size_t result = ft_strlcat(dst, src, 30);
    char asrc[] = "strlcat testing";
    char adst[30] = "String for ";
    size_t aresult = strlcat(adst, asrc, 0);
    
    printf("Src and dst string length: %zu\n", result);
    printf("Destination string after ft_strlcat:\n%s\n", dst);

    printf("Src and dst string length: %zu\n", aresult);
    printf("Destination string after strlcat:\n %s\n", adst);

    return (0);
}