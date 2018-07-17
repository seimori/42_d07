/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:37:29 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/17 16:15:10 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;
	int		range_size;

	if (min < max
			&& (tab = (int*)malloc(sizeof(*tab) * (max - min))))
	{
		i = 0;
		range_size = max - min;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		range[0] = tab;
		return (range_size);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
