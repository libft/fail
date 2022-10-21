#include "ft_fail.h"

#include <stdlib.h>

static const char	*g_description[] = {
	"malloc() failed",
	"malloc() success",
};

void	*sample_mock_malloc(size_t size)
{
	size_t	is_success;
	void	*result;

	ft_fail_select(&is_success, 2, 1, g_description);
	if (!is_success)
		return (NULL);
	result = malloc(size);
	if (!result)
		ft_fail_report_error("malloc() failed.");
	return (result);
}
