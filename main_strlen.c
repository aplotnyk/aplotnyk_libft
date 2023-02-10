/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:05:09 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 20:05:12 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

int main()
{
    char A[] = "Test string";
    char B[] = "T";
    char C[] = "";
    char D[] = "";
    
    printf("A = %lu", strlen(A));
    printf("B = %lu", strlen(B));
    printf("C = %lu", strlen(C));
    printf("D = %lu", strlen(D));

    printf("6 = %d", ft_strlen(A));
    printf("a = %d", ft_strlen(B));
    printf("A = %d", ft_strlen(C));
    printf("@ = %d", ft_strlen(D));
    
    return 0;    
}