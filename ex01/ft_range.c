/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:51:34 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/16 20:35:14 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min < max)
	{
		tab = (int*)malloc(sizeof(*tab) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	else
	{
		return (NULL);
	}
}
