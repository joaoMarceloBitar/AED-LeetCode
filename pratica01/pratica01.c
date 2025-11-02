#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize);
bool podeTroco(int numero,int tamanhoLido);

int main(){
    int test[5] = {5,5,5,10,20};
    lemonadeChange(test,5);
    
    return 0;
}

bool lemonadeChange(int* bills, int billsSize) {
        int i=0;
        int carteira[100];
        int* pcarteira = &carteira;

        while(i<billsSize){
            int* pagamento = bills[i];
            if(podeTroco(pagamento,pcarteira,i)){                
                return true;
            }else{
                printf("Não da pra dar troco");
                return false;
                break;
            }
            i++;
        }
    }
bool podeTroco(int pagamento,int* pcarteira,int tamanhoLido){
    if(pagamento==5){
        pcarteira[tamanhoLido]=pagamento;
        return true;
    }
    if(pagamento==10){
        int count5=0,i;
        for(i=0;i<tamanhoLido;i++){
            if(pcarteira[i] == 5){
                count5++;
            }
        }
    if(count5>=1){
        
    }
    }
    if(pagamento==20){
        int count10=0,count5=0,i;
        for(i=0;i<tamanhoLido;i++){
            if(pcarteira[i]==5){
                count5++;
            }
            if(pcarteira[i]==10){
                count10++;
            }
        }
        if((count10>=1 && count5>=1)||(count5>2)){
            return true;
        }
    }
}
