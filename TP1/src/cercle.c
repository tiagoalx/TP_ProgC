#include <stdio.h>

int main(void)
{
    double rayon;
    double aire;
    double perimetre;
    double pi = 3.14159;

    rayon = 5;

    aire = pi * rayon * rayon;
    perimetre = 2 * pi * rayon;

    printf("Aire = %.2f\n", aire);
    printf("Perimetre = %.2f\n", perimetre);

    return 0;
}


