/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:17:25 by fguzman           #+#    #+#             */
/*   Updated: 2019/10/26 19:21:43 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;
	len = 0;

	while (str[len])
		len++;
	return (len);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("the length of this string is [%d]\n", ft_strlen(argv[1]));
	return (1);
}
