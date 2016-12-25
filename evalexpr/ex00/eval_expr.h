/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:30:17 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 11:56:12 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int	eval_expr_order_2(char **str);
int	eval_expr_order_1(char **str);
int	eval_expr_order_0(char **str);
int	eval_expr(char *str);
#endif
