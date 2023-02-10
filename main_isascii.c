/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:07:56 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 18:45:52 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "ft_isascii.c"

int main()
{
    char A = '6';
    char B = 'a';
    char C = 'A';
    char D = '@';
    unsigned char E = 158;
    unsigned char F = 169;
    
    printf("6 = %d", isascii(A));
    printf("a = %d", isascii(B));
    printf("A = %d", isascii(C));
    printf("@ = %d", isascii(D));
    printf("@ = %d", isascii(E));
    printf("@ = %d", isascii(F));

    printf("6 = %d", ft_isascii(A));
    printf("a = %d", ft_isascii(B));
    printf("A = %d", ft_isascii(C));
    printf("@ = %d", ft_isascii(D));
    printf("@ = %d", ft_isascii(E));
    printf("@ = %d", ft_isascii(F));
    
    return 0;    
}