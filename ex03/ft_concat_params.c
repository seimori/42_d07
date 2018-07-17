/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:38:11 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/17 16:45:11 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_getsize(int argc, char **argv)
{
	int		size;
	int		i;
	int		j;

	size = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
		}
		size += j;
		size++;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = "";
	str = (char*)malloc((*str) * ft_getsize(argc, argv));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
