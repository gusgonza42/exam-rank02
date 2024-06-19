/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:36:19 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/19 13:49:13 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_expand(char *s);

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_expand(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_expand(char *s)
{
	int	p = 0;
	int flag = 0;

	while (s[p] == ' ' || s[p] == '\v'|| s[p] == '\t')
		p++;

	while (s[p])
	{
		if (s[p] == ' ' || s[p] == '\t' || s[p] == '\v')
			flag = 1;
		else
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &s[p], 1);
		}
		p++;
	}
}
