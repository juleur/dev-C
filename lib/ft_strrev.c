#include "ft.h"

char	*ft_strrev(char *str)
{
  int	i;
  int	j;
  char	s;

  i = 0;
  j = ft_strlen(str) - 1;
  while (i <= j)
    {
      s = str[i];
      str[i] = str[j];
      str[j] = s;
      ++i;
      --j; 
    }
  return (str);
}
