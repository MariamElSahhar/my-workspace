#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c);


int	main()
{
	printf("%s", ft_strchr("this a string",'s'));
    return (0);
}
