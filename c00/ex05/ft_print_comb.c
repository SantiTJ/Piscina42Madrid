/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storti-j <storti-j@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:25:44 by storti-j          #+#    #+#             */
/*   Updated: 2026/02/04 10:36:25 by storti-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	function(char x, char y, char z)
{
	print(x);
	print(y);
	print(z);
	if (x < '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				function(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */
