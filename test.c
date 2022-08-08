#include <stdio.h>
int main() {
    int nbr;
    printf("Entrez un nombre: ");
    scanf("%d", &nbr);

    if (nbr >= 0)
    {
        printf("Le nombre est positif");
    }
    else{
        printf("Le nombre est negatif");
    }

    return 0;
}