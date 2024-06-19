/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:34:18 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/18 16:18:30 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	max;

	if (a == 0 || b == 0)
		return(0);
	if (a > b)
		max = a;
	else
		max = b;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
			return (max);
		max++;
	}
	//return(max);
}
