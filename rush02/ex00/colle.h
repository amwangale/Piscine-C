/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:26:27 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/17 15:57:49 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_H
# define COLLE_H

typedef struct	s_colle
{
	char	header[3];
	char	content[3];
	char	footer[3];
}				t_colle;

t_colle			*init_colle_00(void);
t_colle			*init_colle_01(void);
t_colle			*init_colle_02(void);
t_colle			*init_colle_03(void);
t_colle			*init_colle_04(void);
#endif
