/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:12:27 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/01/28 18:34:07 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

#include "ft_memmove.c"

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
   const char src[50] = "String AFTER memmove";
   char dest[50] = "BEFORE memmove";
 //  strcpy(dest,"BEFORE memcpy");
   printf("Before memmove dest = %s\n", dest);
   ft_memmove(dest, src, strlen(src)+1);
   printf("After memmove dest = %s\n", dest);
   
   return(0);
}