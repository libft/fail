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

typedef t_err	(*t_ft_fail)(void *context);

typedef struct s_ft_fail_options {
	size_t	max_depth;
	size_t	max_count;
}	t_ft_fail_options;

t_err	ft_fail_test(
			t_ft_fail target,
			void *context,
			t_ft_fail_options *options);
void	ft_fail_start(void);
void	ft_fail_end(void);
size_t	ft_fail_select(size_t exclusive_max);

#endif
