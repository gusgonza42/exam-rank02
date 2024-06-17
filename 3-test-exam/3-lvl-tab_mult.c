/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:39:32 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/17 15:03:50 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int pos = 0;
	while(str[pos] != '\0')
	{
		ft_putchar(str[pos]);
		pos++;
	}
}
void	ft_putnbr(int nb)
{

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_atoi(char *str)
{
	int pos = 0;
	int res = 0;

	while(str[pos] != '\0')
	{
		res *= 10;
		res += str[pos] - '0';
		pos++;
	}
	return (res);
}

int	main(int ac, char *av[])
{
	int pos = 1;
	int nbr;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (pos <= 9)
		{
			ft_putnbr(pos);
			ft_putstr(" x ");
			ft_putnbr(nbr);
			ft_putstr(" = ");
			ft_putnbr(nbr * pos);
			if (pos < 9)
				ft_putchar('\n');
			pos++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
