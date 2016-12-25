/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:30:04 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 11:59:15 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "utils.h"
#include <stdlib.h>

/*
**		This functions handles a) subexpressions (those between parantheses),
**	which are evaluated in the same way a whole expression is evaluated and
**	b) numerical values
*/

int	eval_expr_order_2(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = 0;
	if (*s == '(')
	{
		s++;
		result = eval_expr_order_0(&s);
		s++;
	}
	else
	{
		while ('0' <= *s && *s <= '9')
		{
			result = result * 10 + *s - '0';
			s++;
		}
	}
	*str = s;
	return (result);
}

/*
**		This function handles multiplication, division and modulus operations.
**	The operands of these operations can be either subexpressions or numerical
**	values; after evaluating the operands' subexpressions, the corresponding
**	operator (*, /, %) can be applyed.
*/

int	eval_expr_order_1(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = eval_expr_order_2(&s);
	while (*s == '*' || *s == '/' || *s == '%')
	{
		if (*s == '*')
		{
			s++;
			result *= eval_expr_order_2(&s);
		}
		else if (*s == '/')
		{
			s++;
			result /= eval_expr_order_2(&s);
		}
		else if (*s == '%')
		{
			s++;
			result %= eval_expr_order_2(&s);
		}
	}
	*str = s;
	return (result);
}

/*
**		This function handles additions and subtractions. The operands can be
**	order 1-operations, subexpressions or numerical values; after evaluating the
**	operands' subexpressions, the corresponding operator (+, -) can be applyed.
*/

int	eval_expr_order_0(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = eval_expr_order_1(&s);
	while (*s == '+' || *s == '-')
	{
		if (*s == '+')
		{
			s++;
			result += eval_expr_order_1(&s);
		}
		else if (*s == '-')
		{
			s++;
			result -= eval_expr_order_1(&s);
		}
	}
	*str = s;
	return (result);
}

/*
**		This function evaluates an expression given as a VALID string.
**	The result of the evaluation is returned.
*/

int	eval_expr(char *str)
{
	int		result;
	char	*str_without_whitespaces;
	char	*str_to_free;

	str_without_whitespaces = remove_whitespaces(str);
	str_to_free = str_without_whitespaces;
	result = eval_expr_order_0(&str_without_whitespaces);
	free(str_to_free);
	return (result);
}
