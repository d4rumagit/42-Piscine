/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mike-sky.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 10:35:20 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/15 10:35:30 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(void)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar('.');
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	main(void)
{
	print_grid();
	return (0);
}
