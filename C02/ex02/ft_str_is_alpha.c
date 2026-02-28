/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:47 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/26 12:25:15 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ))
        {
            return (0);
        }
        i++;
    }
    return (1); 
}

int main(void)
{
    char    *str = "A";
    char    *str2 = "4";
    char    *str3 = "";

    printf("String: %s is: %d\n\n", str, ft_str_is_alpha(str));
    printf("String: %s is: %d\n\n", str2, ft_str_is_alpha(str2));
    printf("String:  %s is: %d\n\n", str3, ft_str_is_alpha(str3));
}