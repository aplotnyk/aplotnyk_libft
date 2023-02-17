/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <aplotnyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:53:26 by aplotnyk          #+#    #+#             */
/*   Updated: 2023/02/14 12:55:04 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
 
int main()  
{  
    int val;  
    char string1[20] = "++898989";  
    val = atoi(string1);  
    printf("String value = %s\n", string1);  
    printf("Integer value = %d\n", val);  
    char string2[] = "Javatpoint";  
    val = atoi(string2);  
    printf("String value = %s\n", string2);  
    printf("Integer value = %d\n", val);  
    return (0);  
}
