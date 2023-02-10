/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:44:50 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/23 18:48:07 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

#include "ft_bzero.c"

void printArray(char arr[], int n)
{
    int i = 0;
    
    while(i < n)
    {
      printf("%c ", arr[i]);
      i++;
    }
}

int main()
{
    int n = 11;
    char arr[12] = "ABCDEFGHI";
  
    ft_bzero(arr, 5);
    printf("Array after bzero()\n");
    printArray(arr, n);
  
    return 0;
}