/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:02:50 by ppreez            #+#    #+#             */
/*   Updated: 2018/06/22 13:04:13 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

typedef struct	s_token
{
	int			posx;
	int			posy;
}				t_token;

typedef struct	s_map
{
	char		**map;
	int			sizex;
	int			sizey;
	int			posx;
	int			posy;
}				t_map;

#endif
