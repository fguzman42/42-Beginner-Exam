/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 20:17:08 by fguzman           #+#    #+#             */
/*   Updated: 2019/10/26 20:39:08 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int	ft_atoi(const char *str)
{
	int i;
	int neg;
	long atoi;
	
	i = 0;
	neg = 1;
	atoi = 0;
	while (str[i] == '\r' || str[i] == '\n' || str[i] == '\t' ||
		   str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			atoi = atoi * 10 + str[i] - '0';
			i++;
	}
	return ((int)atoi * neg);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("this is ft_atoi: [%d]\nthis is the system's atoi: [%d]\n",
				ft_atoi(argv[1]), atoi(argv[1]));
	return (0);
}
