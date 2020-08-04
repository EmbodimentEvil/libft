#include "ft_memory.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = ft_memalloc(size);
	ft_memcpy(new_ptr, ptr, size);
	ft_memdel(&ptr);
	return (new_ptr);
}
