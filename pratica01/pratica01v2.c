// João Marcelo Bitar
// LeetCode 860

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool lemonadeChange(int *bills, int billsSize);

int main()
{
    int test[5] = {5,5,5,10,20};
    bool res = lemonadeChange(test, 5);
    printf("%d", res);

    return 0;
}

bool lemonadeChange(int *bills, int billsSize)
{
    int count5 = 0, count10 = 0, i;

    for (i = 0; i <= billsSize; i++)
    {
        if (bills[i] == 5)
        {
            count5++;
        }
        else if (bills[i] == 10)
        {
            count5 = count5 - 1;
            count10++;
        }
        else if (bills[i] == 20)
        {
            if (count10 >= 1 && count5 >= 1)
            {
                count10 = count10 - 1;
                count5 = count5 - 1;
            }
            else if (count5 >= 3)
            {
                count5 = count5 - 3;
            }
            else
            {
                return false;
            }
        }
    }
    if (count5 < 0 || count10 < 0)
    {
        printf("troco errado");
        return false;
    }
    else
    {
        printf("troco certo");
        return true;
    }
}