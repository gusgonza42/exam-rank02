/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:01:07 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/19 16:21:33 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ros(char *s);

int main (int ac, char **av)
{
	// Verificar que hay exactamente 2 argumentos (el nombre del programa y un argumento adicional)
	if (ac == 2)
	{
		ft_ros(av[1]);
	}
	write(1, "\n", 1); // Imprimir nueva línea al final
	return (0);
}

void	ft_ros(char *s)
{
	int p = 0;

	// Saltar los espacios y tabulaciones al principio
	while (s[p] == ' ' || s[p] == '\t')
		p++;

	int start = p;

	// Encontrar el final de la primera palabra
	while (s[p] && s[p] != ' ' && s[p] != '\t')
		p++;

	int end = p;

	// Verificar si hay más palabras después de la primera
	while (s[p] == ' ' || s[p] == '\t')
		p++;

	// Si no hay más palabras, imprimir la primera palabra y salir
	if (s[p] == '\0')
	{
		write(1, s + start, end - start);
		return;
	}

	// Imprimir el resto de la cadena
	int primera_palabra_impresa = 0;
	while (s[p])
	{
		if (s[p] == ' ' || s[p] == '\t')
		{
			while (s[p] == ' ' || s[p] == '\t')
				p++;
			if (s[p])
				write(1, " ", 1);
		}
		else
		{
			write(1, &s[p], 1);
			p++;
			primera_palabra_impresa = 1;
		}
	}

	// Imprimir un espacio antes de la primera palabra si se movió y se imprimió algo
	if (primera_palabra_impresa)
		write(1, " ", 1);

	// Imprimir la primera palabra al final
	while (start < end)
	{
		write(1, &s[start], 1);
		start++;
	}
}
