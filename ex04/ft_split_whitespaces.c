/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:50:38 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/19 19:24:27 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strsize(char *str)
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

int		ft_wordsize(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
			&& str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

void	ft_sub_split(char *str, char **tab, int *i, int *j)
{
	int		k;

	k = 0;
	while (str[*i] != ' ' && str[*i] != '\t' && str[*i] != '\n'
			&& str[*i] != '\0')
	{
		tab[*j][k] = str[*i];
		k++;
		*i = *i + 1;
	}
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
	{
		*i = *i + 1;
	}
	if (k > 0)
	{
		tab[*j][k] = '\0';
		*j = *j + 1;
	}
	k = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if ((tab = (char**)malloc(sizeof(*tab) * ft_strsize(str))))
	{
		while (str[i] != '\0')
		{
			if ((tab[j] = (char*)malloc(sizeof(*tab[j]) * ft_wordsize(str, i))))
				ft_sub_split(str, tab, &i, &j);
			else
				return (0);
		}
		if ((tab[j] = (char*)malloc(sizeof(*tab[j]) * ft_wordsize(str, i))))
			tab[j][0] = '0';
		return (tab);
	}
	return (0);
}
