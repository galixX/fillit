/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 11:54:54 by paim              #+#    #+#             */
/*   Updated: 2016/02/04 15:54:24 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_scheckf
{
	int			*tab;
	int			fd;
	int			ret;
	char		*buf;
	char		*bn[1];
	int			nbpiece;
}				t_scheckf;

int				checkcharfirt(char *str, int i);
void			retraitpiece(char **map, int npiece);
char			**init_map(char **map, int size);
t_scheckf		*init_struct(void);
void			error(void);
void			ft_affichagemap(char **map);
int				movemap(char ***map, char ***bigtab, int piecen, int *xy);
char			**remap(char **oldmap);
int				countform(char **argv, int j);
int				carmini(int i);
void			openingfile(int argc, char **argv, t_scheckf *t);
int				*check_file(char **argv, int i, t_scheckf *t);
int				check_tetra(char *str, int j);
int				check_coord_tetra(char *str, int j);
int				check_coord_tetra2(char *str, int j);
int				check_coord_tetra3(char *str, int j);
int				check_coord_tetra4(char *str, int j);
int				check_coord_tetra5(char *str, int j);
char			**creamap(int size);
char			***returnform(int *tab);
int				placepossible(char **map, char **piece, int y, int x);
char			*dlf(const char *motif, char l, int piece);
void			form1(char ***bigtab, int j, int nb);
void			form11(char ***bigtab, int j);
void			form12(char ***bigtab, int j);
void			form13(char ***bigtab, int j);
void			form14(char ***bigtab, int j);
void			form2(char ***bigtab, int j, int nb);
void			form21(char ***bigtab, int j);
void			form22(char ***bigtab, int j);
void			form23(char ***bigtab, int j);
void			form24(char ***bigtab, int j);
void			form3(char ***bigtab, int j, int nb);
void			form31(char ***bigtab, int j);
void			form4(char ***bigtab, int j, int nb);
void			form41(char ***bigtab, int j);
void			form42(char ***bigtab, int j);
void			form43(char ***bigtab, int j);
void			form44(char ***bigtab, int j);
void			form5(char ***bigtab, int j, int nb);
void			form51(char ***bigtab, int j);
void			form52(char ***bigtab, int j);
void			form6(char ***bigtab, int j, int nb);
void			form61(char ***bigtab, int j);
void			form62(char ***bigtab, int j);
void			form7(char ***bigtab, int j, int nb);
void			form71(char ***bigtab, int j);
void			form72(char ***bigtab, int j);
char			**placemap(char **map, char **piece, int *xy);

#endif
