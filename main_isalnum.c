/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:05:10 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 18:05:17 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "ft_isalnum.c"

int main()
{
    char A = '6';
    char B = 'a';
    char C = 'A';
    char D = '@';
    
    printf("6 = %d", isalnum(A));
    printf("a = %d", isalnum(B));
    printf("A = %d", isalnum(C));
    printf("@ = %d", isalnum(D));

    printf("6 = %d", ft_isalnum(A));
    printf("a = %d", ft_isalnum(B));
    printf("A = %d", ft_isalnum(C));
    printf("@ = %d", ft_isalnum(D));
    
    return 0;    
}