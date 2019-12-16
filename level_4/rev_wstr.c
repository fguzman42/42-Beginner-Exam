/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 05:58:50 by fguzman           #+#    #+#             */
/*   Updated: 2019/11/21 21:22:20 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}


int main(int argc, char **argv)
{
	char *tmp;
	int i;
	int x;
	int size;
	int r;

	r = 0;
	i = 0;
	x = 0;
	tmp = NULL;
	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		tmp = (char *)malloc(sizeof(char) * size + 1);
		while (size >= 0)
		{
			x = 0;
			if (argv[1][size] >= 33 && argv[1][i] <= 126)
			{
				while (argv[1][size] >= 33 && argv[1][i] <= 126 && size >= 0)
				{
					size--;
					x++;
				}
			}
			if (x > 0)
			{
				if (size < 0)
					r = 0;
				else 
					r = size + 1;
				while (x > 0)
				{
					tmp[i] = argv[1][r];
					write(1, &tmp[i], 1);
					r++;
					i++;
					x--;
				}
			}
			if (size < 0)
				break ;
			tmp[i] = argv[1][size];
			write(1, &tmp[i], 1);
			size--;
			i++;
		}
	}
	free (tmp);
	write(1, "\n", 1);
	return (0);
}
