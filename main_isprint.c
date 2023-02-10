/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:58:11 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 19:02:49 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "ft_isprint.c"

int main()
{
    char A = '6';
    char B = 'a';
    char C = 'A';
    char D = '@';
    char F = 15;
    
    printf("6 = %d", isprint(A));
    printf("a = %d", isprint(B));
    printf("A = %d", isprint(C));
    printf("@ = %d", isprint(D));
    printf("char15 = %d", isprint(F));

    printf("6 = %d", ft_isprint(A));
    printf("a = %d", ft_isprint(B));
    printf("A = %d", ft_isprint(C));
    printf("@ = %d", ft_isprint(D));
    printf("char15 = %d", ft_isprint(F));
    
    return 0;    
}