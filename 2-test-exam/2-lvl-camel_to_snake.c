/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-lvl-camel_to_snake.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 02:24:42 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/14 19:25:13 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //for free
#include <unistd.h> //for write

void	camel_to_snake(const char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		camel_to_snake(av[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}


void	camel_to_snake(const char *str)
{
	//necesitamos la longitud del string leido por la terminal
	int len = 0;
	while (str[len])
		len++;
	//necesitamos reservar espacio en la memoria
	char *new_str = (char *)malloc(2 * len + 1);
	if (!new_str)
	{
		//write(2, "KO, memory\n", 11);
		return ;
	}
	int i = 0;
	int j = 0;
	while (i < len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//agregamosd un _ antes de la letra mayúscula
			//excepto si es el primer carácter 
			if (i != 0)
				new_str[j++] = '_';
			//convertimos la letra MAYUS a Minuscula
			new_str[j++] = str[i] + 32; // 'A' (65) a 'a' (97) es +32
		}
		else
		{
			//sino, copiamos las letras minusculas
			new_str[j++] = str[i];
		}
		i++;
	}
	//agregamos el final de cadena
	new_str[j] = '\0';

	//printamos la cade convertida a snake_case
	write(1, new_str, j);
	write(1, "\n", 1);
	//liberamos la memoria reservada sino hay leaks
	free(new_str);
}

