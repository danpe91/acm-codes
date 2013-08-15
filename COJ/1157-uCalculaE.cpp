#include <stdio.h>


int main()
{
    register double fact[10], res = 0;
    register int i = 0;
   
    fact[0] = 1;
    for(i = 1; i <= 9; i++)
        fact[i] = fact[i - 1] * i;
   
    printf("n e\n- -----------\n");
   
    for(i = 0; i <= 9; i++)
    {
        res += 1 / fact[i];
        if(i < 2)
            printf("%d %.0lf\n",i,res);
        else if(i == 2)
            printf("%d %.1lf\n",i,res);
        else
            printf("%d %.9f\n",i,res);
    }
   

    return 0;
}