/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:42:41 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/22 18:04:46 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "ft_isdigit.c"

int main()
{
    char A = '6';
    char B = 'a';
    char C = 'A';
    char D = '@';
    
    printf("6 = %d", isdigit(A));
    printf("a = %d", isdigit(B));
    printf("A = %d", isdigit(C));
    printf("@ = %d", isdigit(D));

    printf("6 = %d", ft_isdigit(A));
    printf("a = %d", ft_isdigit(B));
    printf("A = %d", ft_isdigit(C));
    printf("@ = %d", ft_isdigit(D));
    
    return 0;    
}