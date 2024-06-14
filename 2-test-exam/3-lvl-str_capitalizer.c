/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-lvl-str_capitalizer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:51:55 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/14 19:26:00 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av){
	int		i;
	char	*str;
	int		j;

	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{
			i = 0;
			str	= av[j];
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			while (str[i])
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
				if (str[0] >= 'a' && str[0] <= 'z')
					str[i] = str[i] - 32;	
				i++;
			}
			i = 0;
			while (str[i]) 
			{
				if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
				write(1, &str[i], 1);
				i++;
			}
			j++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

