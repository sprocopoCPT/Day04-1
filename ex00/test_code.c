#include <unistd.h>

int ft_iterative_factorial(int nb)
{  
	
  int nb_factorial = nb;
	int count_multiplier = 1;

	if (nb == 0)
		return 1;
	if (nb < 0)
		return 0;
	if (nb > 12)
		return 0;

	while (count_multiplier <  nb)
	{
	   	nb_factorial =  nb_factorial * count_multiplier;
		count_multiplier++;		    
	}

	return nb_factorial;
}

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

int main(void)
{
int nb_factorial;

nb_factorial = ft_iterative_factorial(4);
ft_putnbr(nb_factorial);

}