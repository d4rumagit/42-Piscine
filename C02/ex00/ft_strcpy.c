/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:10:20 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/26 11:29:51 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)

{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++; 
 
    } 
    dest[i] = src[i];
    return (dest);
}

int main(void)
{
    char dest[] = "42";
    char src[] = "24";

    printf("dest Before:  %s\n", dest);
    ft_strcpy(dest, src);
    printf("dest After:   %s\n", dest);
    return (0);
}
