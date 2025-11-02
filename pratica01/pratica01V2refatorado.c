// João Marcelo Bitar
// LeetCode 860

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LemonadeChange( int *bills, int billsSize );

int main()
{
    int test[ 5 ] = { 5, 5, 10, 10, 20 };
    bool res = LemonadeChange( test, 5 );
    printf( "%d", res );

    return 0;
}

/*
====================
LemonadeChange
    -declara contadores para notas de 5 e 10 recebidas como pagamento
    -Recebe array de notas recebidas e tamanho do array
    -decementa notas dadas como troco e incrementa as recebidas dependendo do caso(5,10 ou 20)
    -valida se o numero do contador de 5 e 10 é maior que zero, retornando true ou false dependendo do resultado
====================
*/

bool LemonadeChange( int *bills, int billsSize )
{
    int count5 = 0; int count10 = 0; int i;

    for ( i = 0; i <= billsSize; i++ )
    {
        if ( bills[i] == 5 )
        {
            count5++;
        } else if ( bills[i] == 10 ) {
            count5 = count5 - 1;
            count10++;
        } else if ( bills[i] == 20 ) {
            if ( count10 >= 1 && count5 >= 1 )
            {
                count10 = count10 - 1;
                count5 = count5 - 1;
            } else if ( count5 >= 3 ) {
                count5 = count5 - 3;
            } else {
                return false;
            }
        }
    }
    if ( count5 < 0 || count10 < 0 )
    {
        return false;
    } else {
        return true;
    }
}