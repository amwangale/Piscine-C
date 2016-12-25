/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:18:59 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/17 18:06:27 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_COLLE_H
# define IS_COLLE_H

int	is_colle(t_colle *colle, char *str, int x, int y);
int	is_colle_check_header(t_colle *colle, char *str, int x);
int is_colle_check_content(t_colle *colle, char *str, int x, int y);
int	is_colle_check_footer(t_colle *colle, char *str, int x, int y);
#endif
