/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:10:23 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/16 23:43:31 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	//while letter is less than or equal to z
	while (letter <= 'z')
	{
		//print letter
		write(1, &letter, 1);

		//go to next letter
		letter++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
} */#include <unistd.h>

void    ft_print_alphabet(void)
{

    letter = 'a';


    while (letter <= 'z')
    {
        write (1, &letter, 1);
        letter++;
    }

}

int main(void)

{
    ft_print_alphabet();
}