/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:31:11 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/26 11:49:49 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main(void)
{
    char    src[] = "Hello World";
    char    dest[20];

    ft_strncpy(dest, src, 10);
    printf("Length of : %s\n", dest);
    return (0);
}