/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:14:24 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 16:45:59 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "ft_isalpha.c"

int main()
{
    char A = '6';
    char B = 'a';
    char C = 'A';
    char D = '@';
    
    printf("6 = %d", isalpha(A));
    printf("a = %d", isalpha(B));
    printf("A = %d", isalpha(C));
    printf("@ = %d", isalpha(D));

    printf("6 = %d", ft_isalpha(A));
    printf("a = %d", ft_isalpha(B));
    printf("A = %d", ft_isalpha(C));
    printf("@ = %d", ft_isalpha(D));
    
    return 0;    
}