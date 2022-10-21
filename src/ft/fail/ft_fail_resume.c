#include "ft_fail.h"

#include <assert.h>

void	ft_fail_resume(void)
{
	assert(ft_fail_g()->pause_cause_length);
	ft_fail_g()->pause_cause_length--;
}
