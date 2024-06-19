/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:55:26 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/19 13:10:57 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fw(char *s);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_fw(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_fw(char *s)
{
	int	pos = 0;

	while (s[pos] == ' ' || s[pos] == '\v' || s[pos] == '\t')
		pos++;
	while (s[pos] && s[pos] != ' ' && s[pos] != '\v' && s[pos] != '\t')
	{
		write(1, &s[pos], 1);
		pos++;
	}

}
