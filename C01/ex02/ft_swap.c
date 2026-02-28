/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:40:43 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/19 11:22:34 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_swap(int *a, int *b)
{
    int temp = *a;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 4;
    int b = 2;
    ft_swap(&a, &b);
    printf("Print before swapping: %d\n", a, b);
    printf("Print after swapping: %d\n", a, b);
}