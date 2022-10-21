/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FAIL_H
# define FT_FAIL_H

# include "ft_types.h"

# include <stddef.h>

typedef t_err	(*t_ft_fail)(const void *context);

typedef struct s_ft_fail_options {
	size_t	max_depth;
	size_t	max_count;
}	t_ft_fail_options;

t_err		ft_fail_test(
				t_ft_fail target,
				const void *context,
				const t_ft_fail_options *options);
t_err		ft_fail_select(
				size_t *out_index,
				size_t count,
				size_t error_count,
				const char *const *description);
t_err		ft_fail_pause(
				const char *cause);
void		ft_fail_resume(void);
bool	 	ft_fail_is_error(void);
t_err		ft_fail_report_error(const char *description);

typedef struct s_ft_fail_g_select
{
	size_t				count;
	size_t				error_count;
	size_t				index;
	const char *const	*description;
}	t_ft_fail_g_select;

typedef struct s_ft_fail_g
{
	size_t				select_length;
	size_t				select_capacity;
	t_ft_fail_g_select	*select;
	size_t				pause_cause_length;
	size_t				pause_cause_capacity;
	const char			**pause_cause;
	const char			*reported_error;
}	t_ft_fail_g;

t_ft_fail_g	*ft_fail_g(void);

#endif
