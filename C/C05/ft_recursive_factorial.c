#include<stdio.h>
int ft_iterative_factorial(int nb)
{
        if (nb > 0)
        {
            if (nb == 1)
            {
                return 1;
            }
            else
            {
                return(nb * ft_iterative_factorial(nb-1));    
            }            
        }
        return(0);
        
        
    // while (i <= 4)
    // {
    //     result *= ft_iterative_factorial(nb); 
    //     i++;
    // }
    

}

int main(void)
{
    printf("HOla que dicen los chavales: %d",ft_iterative_factorial(-210));
    return(0);
}
