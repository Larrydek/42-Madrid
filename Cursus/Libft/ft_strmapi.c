#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *final_s;
    size_t i;

    i = 0;
    final_s = ft_strdup(s);
    if (final_s == NULL)
        return NULL;

    while (final_s[i])
    {
        final_s[i] = f(i, final_s[i]);
        i++;
    }
    return final_s;
}