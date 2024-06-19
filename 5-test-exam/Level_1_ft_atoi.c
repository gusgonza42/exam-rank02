/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:20:04 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/19 13:33:44 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	p = 0;
	int	sig = 1;
	int	res = 0;

	while (str[p] == ' ' && str[p] == '\t' && str[p] == '\v' && str[p])
		p++;;
	if(str[p] == '+' || str[p] == '-')
	{
		if (str[p] == '-')
			sig *= -1;
		p++;
	}

	while(str[p] >= '0' && str[p] <= '9')
	{
		res = (res * 10) + (str[p] - '0');
		p++;
	}
	return (res * sig);
}
