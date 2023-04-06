#include<stdio.h>
//controlar que no sea negativo el parametroç
int ft_iterative_factorial(int nb)
{
    int i;
    
    i = nb;
    if (nb > 0)
    {
        while (i > 0)
        {
            nb *= (i);
            i--;
        }
        return (nb);
    }
    return (0);
}

int main(void)
{
    printf("HOla que dicen los chavales: %d",ft_iterative_factorial(200));
    return(0);
}
