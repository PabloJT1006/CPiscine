#include <stdio.h>
int ft_recursive_power(int nb, int power)
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
	
	
	
	nb *= ft_recursive_power(nb, power - 1);
		
	
	return (nb);
}

int main(void)
{
	printf("Buenos dias: %d",ft_recursive_power(4,3));
}