int ft_find_next_prime(int nb)
{
  int p = 0;
  int next_prime = nb;
  int i = 1;
  int count = 0;

  if (nb <= 2)
  {
    return 2;
  }

  while (p == 0)
  {
    i = 1;
    count = 0;

    while (i <= next_prime)
    {
      if (next_prime % i == 0)
      {
       count++;
      }
      i++;
    }

    if (count == 2)
    {
      p = 1;
    }
  
  next_prime++;
  }
  
  next_prime--;
  return next_prime;
}