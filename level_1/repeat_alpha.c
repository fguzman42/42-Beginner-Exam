/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:24:09 by fguzman           #+#    #+#             */
/*   Updated: 2019/10/26 19:33:17 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int counter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			counter = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				counter = argv[1][i] - 'a';
				while (counter > 0)
				{
					write(1, &argv[1][i], 1);
					counter--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				counter = argv[1][i] - 'A';
				while(counter > 0)
				{
					write(1, &argv[1][i], 1);
					counter--;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
