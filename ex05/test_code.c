#include <unistd.h>

void ft_putchar(char c)
{
  write (1,&c,1);
}

void ft_putnbr(int nb)
{
  long i;
  i = nb;

  if (i < 0)
  {
    ft_putchar('-');
    i = i * (-1);
  }
  if (i > 9)
  {
    ft_putnbr(i / 10);
    ft_putnbr(i % 10);
  }
  else if (i < 10)
  {
    ft_putchar(i + '0');
  }
}

int ft_sqrt(int nb)
{
  int sqrt = 1;
  while (sqrt*sqrt < nb)
  {
    sqrt++;
  }

  if (sqrt*sqrt == nb)
  {
    return sqrt;
  }
  else
    return 0;
}

int main(void)
{
int nb_factorial;

nb_factorial = ft_sqrt(64);
ft_putnbr(nb_factorial);

}