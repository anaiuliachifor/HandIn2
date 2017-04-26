#include "stringUtils.h"
size_t strlen(const char *str)
{
	int len = 0;
	if (str == NULL)
	{
		return 0;
	}
	while (*str != 0)
	{
		len++;
		str++;
	}
	return len;
}