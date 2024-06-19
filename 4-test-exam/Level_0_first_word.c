/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:48:39 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/18 15:08:47 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_word(char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_first_word(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_first_word(char *str)
{
	int pos = 0;
	//si encuentra space o horizontal tab seguimos avanzando
	while (str[pos] == ' ' || str[pos] == '\t' || str[pos] == '\v')
		pos++;
	//imprimimos hasta que sea distinto de space o tabs para decir que es una palabra
	while (str[pos] != ' ' && str[pos] != '\t' && str[pos])
	{
		write(1, &str[pos], 1);
		pos++;
	}
	//write(1, "\n", 1);
}
