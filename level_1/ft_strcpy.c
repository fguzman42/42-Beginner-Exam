/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:02:37 by fguzman           #+#    #+#             */
/*   Updated: 2019/10/26 19:16:40 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}


int	main(int argc, char **argv)
{
	char *dst;

	dst = ((char *)malloc(sizeof(char) * strlen(argv[1])));

	if (argc == 2)
		printf("the copy of the argument is [%s]\n", ft_strcpy(dst, argv[1]));
	return (0);
}
