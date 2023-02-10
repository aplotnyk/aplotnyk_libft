/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:31:16 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/28 17:39:42 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

#include "ft_memcpy.c"

/*
void printArray(char arr[], int n)
{
    int i = 0;
    
    while(i < n)
    {
      printf("%c ", arr[i]);
      i++;
    }
}*/

int main ()
{
   const char src[50] = "String AFTER memcpy";
   char dest[50] = "BEFORE memcpy";
 //  strcpy(dest,"BEFORE memcpy");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}