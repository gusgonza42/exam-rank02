/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 05:14:01 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/09 06:08:51 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_point
{
	int	x;
	int	y;
} t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	// Verificar si el punto actual está fuera de los límites de la matriz o no coincide con el carácter objetivo
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return ;
	 // Marcar el punto actual con 'F'
	tab[cur.y][cur.x] = 'F';
	//llamda recursiva para las 4 direcciones
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill); //izq
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill); //der
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill); //Arriba
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill); // abajo
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	//función fill con el carácter en la posición inicial
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
