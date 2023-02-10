/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:04:08 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/23 18:53:55 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

#include "ft_memset.c"

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
    int n = 9;
    char arr[9] = "ABCDEFGHI";
  
    ft_memset(arr, '@', 5);
    printf("Array after memset()\n");
    printArray(arr, n);
  
    return 0;
}