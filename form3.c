/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/20 13:41:12 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form31(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("##..", '#', j);
	bigtab[j][k + 1] = dlf("##..", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form3(char ***bigtab, int j, int nb)
{
	if (nb == 31)
		form31(bigtab, j);
}
