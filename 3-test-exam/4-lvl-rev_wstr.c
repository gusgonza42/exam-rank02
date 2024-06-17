/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:41:02 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/17 16:03:56 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int start;
	int end;
	int pos = 0;

	if (ac == 2)
	{
		// Encuentra la longitud de la cadena
		while (av[1][pos] != '\0')
			pos++;
		pos--; // Retrocede para evitar el carácter nulo
		int first_word = 1; // Para controlar el espacio entre palabras
		while (pos >= 0)
		{
			// Ignora los espacios y tabulaciones al final
			while (pos >= 0 && (av[1][pos] == ' ' || av[1][pos] == '\t'))
				pos--;
			end = pos;
			// Encuentra el inicio de la palabra
			while (pos >= 0 && av[1][pos] != ' ' && av[1][pos] != '\t')
				pos--;
			start = pos + 1;
			if (!first_word)
				write(1, " ", 1);
			first_word = 0;
			// Escribe la palabra encontrada
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
