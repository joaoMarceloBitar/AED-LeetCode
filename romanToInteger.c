#include <stdio.h>

int romanToInt(char* s) {
    int i = 1, j = 0, numero = 0;
    while(s[j] != '\0'){
        
        if(s[j] == 'I'){
            if(s[i] == 'V' || s[i] == 'X'){
                numero--;
            }else{
                numero++;
            }
        }
        if(s[j] == 'V'){
            numero = numero + 5;
        }
        if(s[j]== 'X'){
            if(s[i] == 'L' || s[i] == 'C'){
                numero -=10;
            }else{
                numero += 10;
            }
        }
        if(s[j] == 'L'){
            numero = numero + 50;
        }
        if(s[j] == 'C'){
            if(s[i]=='D' || s[i]=='M'){
                numero-=100;
            }else
                numero = numero + 100;
        }
        if(s[j] == 'D'){
            numero = numero + 500;
        }
        if(s[j] == 'M'){
            numero = numero + 1000;
        }

        j++;
        i++;
    }
    return numero;
}

int main(){
    char s[] = "LVIII";
    int resultado = romanToInt(s);
    printf("%d", resultado);

    return 0;
}