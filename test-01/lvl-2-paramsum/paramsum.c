/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 04:04:54 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/09 04:52:02 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_paramsum(int ac);

int	main(int ac, char **av)
{
	if (ac == 1)//check si no hay argumentos +1 siempre
	{
		write(1, "0\n", 2);//numerp de arg 
	}
	else
	{
		ft_paramsum(ac - 1);
	}
	return (0);
}

//tenemos que pasar el ac y no el av
void	ft_paramsum(int ac)
{
	char count_args_str[20];
	int i = 0;
	while (ac > 0)
	{
		// Obtiene el último dígito del número de argumentos y lo convierte en carácter
		count_args_str[i++] = ac % 10 + '0';
		// Divide el número de argumentos para pasar al siguiente dígito
		ac /= 10;
	}
	// Bucle para imprimir la cadena de caracteres en orden inverso
	while (--i >= 0)
		write(1, &count_args_str[i], 1);
	write(1, "\n", 1);

}
