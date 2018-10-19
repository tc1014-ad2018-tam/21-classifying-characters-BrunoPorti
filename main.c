//Bruno Portilla Hinojosa
//ITESM

#include <stdio.h>

int main() {
    char phr[100];
    int letras = 0;
    int vows = 0;       //asigno variable para cada tipo de caracter
    int cons = 0;
    int digs = 0;
    int spacs = 0;
    int specials = 0;

    printf("In this program you can enter any phrase and i will classify all character in it.\nEnter a phrase:\n"); //pido la frase
    gets(phr);

    for(int i=0; phr[i]!='\0'; i++) {

        if ((phr[i] >= 'a' && phr[i] <= 'z')||(phr[i] >= 'A' && phr[i] <= 'Z')) {       //Clasifico tolos los caracteres
            letras++;

            if (phr[i] == 'A'||phr[i] == 'E'||phr[i] == 'I'||phr[i] == 'O'||phr[i] == 'U'||phr[i] == 'a'||phr[i] == 'e'|| phr[i] == 'i'|| phr[i] == 'o'||phr[i] == 'u')
            { vows++;
            } else cons++;

        } else if (phr[i] >= '0' && phr[i] <= '9') {
            digs++;

        } else if (phr[i] == ' ') {
            spacs++;

        } else specials++; }

    printf("your phrase has:\n %d vowels.\n %d consonants\n %d digits\n %d spaces\n %d special characters.\n", vows, cons, digs, spacs, specials); //muestro resultados.

    return 0;
}