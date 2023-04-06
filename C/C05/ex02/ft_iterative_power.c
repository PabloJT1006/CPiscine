#include<stdio.h>
int	ft_iterative_power(int nb, int power)
{
    int	i;
	int x;

	i = 0;
	x = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	
	
	while (i < power - 1)
	{
		nb *= x;
		i++;
	}
	return (nb);
}

int main(void)
{
	printf("Buenos dias: %d",ft_iterative_power(2,3));
}