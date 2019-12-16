/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 04:43:31 by fguzman           #+#    #+#             */
/*   Updated: 2019/11/21 07:49:06 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


unsigned int		pgcd(unsigned int a, unsigned int b)
{
	unsigned int q;
	unsigned int r;
	unsigned int gcd;
	unsigned int num;
	gcd = (a > b) ? a : b;
	num = (gcd == a) ? b : a;
	q = gcd / num;
	r = gcd % num;
	while (r != 0)
	{
		gcd = num;
		num = r;
		q = gcd / r;
		r = gcd % r;
	}
	return (num);
}


int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
