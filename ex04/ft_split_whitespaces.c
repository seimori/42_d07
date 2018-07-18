/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:50:38 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/18 23:53:53 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_getsize(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j++;
		}
		i++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	if ((tab = (char**)malloc(sizeof(**tab) * (ft_getsize(str) + 5))))
	{
		while (str[i] != '\0')
		{
			if ((tab[j] = (char*)malloc(sizeof(*tab[j]) * 20)))
			{
				while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
						&& str[i] != '\0')
				{
					tab[j][k] = str[i];
					k++;
					i++;
				}
				while (str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
				{
					tab[j][k] = '\0';
					i++;
					k = 0;
				}
				j++;
			}
			else
				return (0);
		}
		if ((tab[j + 1] = (char*)malloc(sizeof(*tab[j]) * 20)))
			tab[j + 1][0] = 'o';
		return (tab);
	}
	return (0);
}
