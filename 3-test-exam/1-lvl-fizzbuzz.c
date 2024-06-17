/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:09:50 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/17 14:11:20 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int pos;

	pos = 1;
	while(pos <= 100)
	{
		if (pos % 3 == 0 && pos % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (pos % 3 == 0)
			write(1, "fizz", 4);
		else if (pos % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(pos);
		write(1, "\n", 1);
		pos++;
	}
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

