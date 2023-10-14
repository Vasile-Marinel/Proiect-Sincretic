#include <stdio.h>
#include <stdbool.h>

#define N 8

int tabla[N][N];
int numarSolutii=0;

//Functia pentru afisarea tablei de sah
void afiseazaTabla()
{
    numarSolutii++;
    printf("\nSolutia %d:\n", numarSolutii);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //Afiseaza liniile orizontale ale tablei de sah
            printf("-----");
        }
       printf("\n");

        for(int j = 0; j < N; j++)
        {
            //Afiseaza liniile verticale si piesele de sah
            printf("|  ");
            printf("%d ", tabla[i][j]);
        }
        printf("|\n");
    }

// Afișează ultima linie orizontală a tablei de șah
    for(int j = 0; j < N; j++)
    {
        printf("-----");
    }
    printf("\n");
}



int main()
{
    //Initializam tabla de sah cu 0
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            tabla[i][j]=0;
    
    afiseazaTabla();
    return 0;
}
