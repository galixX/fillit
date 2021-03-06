/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/29 12:20:01 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form51(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("####", '#', j);
	bigtab[j][k + 1] = dlf("....", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form52(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("#...", '#', j);
	bigtab[j][k + 1] = dlf("#...", '#', j);
	bigtab[j][k + 2] = dlf("#...", '#', j);
	bigtab[j][k + 3] = dlf("#...", '#', j);
}

void	form5(char ***bigtab, int j, int nb)
{
	if (nb == 51)
		form51(bigtab, j);
	if (nb == 52)
		form52(bigtab, j);
}
