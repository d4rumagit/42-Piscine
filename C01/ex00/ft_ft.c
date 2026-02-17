/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoloza <mtoloza@student.42.tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 08:08:34 by mtoloza           #+#    #+#             */
/*   Updated: 2026/02/17 12:29:31 by mtoloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // This is the library used for our includes(to use printf)

void	ft_ft(int *nbr); // This is the prototype stating "There is a function called "ft_ft" and it returns nothing."

void	ft_ft(int *nbr) // This is the definition of that get implemented.
{
	*nbr = 42; // nbr is the address of an  int. And  *nbr is the actual int at THAT address.
}

int	main(void) // is the ENTRY point of a program. 
{
	int	c; // this creates an INTEGER VARIABLE
	c = 0; // now we stored ZERO inside, so now it is initialized
	ft_ft(&c); /// KEY POINT!!!  Calling a function. Can pass inside ( ) <-- values (42), variables (c), or addresses (&c)
	printf("%d\n", c);
}
