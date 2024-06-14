/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-lvl-ft_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:37:24 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/14 19:24:43 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		write(1, &str[pos], 1);
		pos++;
	}
}
/*
int main(void)
{
	char	*str = "Yow chat";
	ft_putstr(str);
	return (0);
}
*/

