#include <stdio.h>
int main ()
{
char letra;
printf("Escreva uma letra no terminal e pressione a tecla Enter:  ");
letra = getc(stdin);
printf("A letra que escreveu foi: %c\n", letra);
return 0;
}


