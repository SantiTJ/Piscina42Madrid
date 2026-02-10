/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storti-j <storti-j@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:36:28 by storti-j          #+#    #+#             */
/*   Updated: 2026/01/30 13:24:17 by storti-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write (1, &digit, 1);
		digit ++;
	}
}

/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */
