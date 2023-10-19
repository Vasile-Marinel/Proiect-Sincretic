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

// Afiseaza ultima linie orizontala a tablei de sah
    for(int j = 0; j < N; j++)
    {
        printf("-----");
    }
    printf("\n");
}

//Functia care verifica daca o regina poate fi plasata intr-o anumita pozitie
bool esteSigur(int rand, int coloana)
{
    //Verificam randul pe stanga 
    for(int i = 0; i < coloana; i++)
        if(tabla[rand][i])
            return false;

    //Verificam diagonala sus-stanga
    for(int i = rand, j = coloana; i >= 0 && j >= 0; i--, j--)
        if(tabla[i][j])
            return false;

    // Verificam diagonala jos-stanga
    for (int i = rand, j = coloana; i < N && j >= 0; i++, j--)
        if (tabla[i][j])
            return false;

    return true;
}

//Functia care rezolva problema reginelor
bool rezolvaProblemaReginelor(int coloana)
{
    if(coloana >= N)
    {
        afiseazaTabla();
        return true;
    }

    bool rezultat = false;
    for(int i = 0; i < N; i++)
    {
        if(esteSigur(i, coloana))
        {
            tabla[i][coloana]=1;

            rezultat = rezolvaProblemaReginelor(coloana + 1) || rezultat;

            tabla[i][coloana]=0;    //Daca plasarea nu este posibila, revenim si resetam
        }
    }

    return rezultat;
}

int main()
{
    //Initializam tabla de sah cu 0
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            tabla[i][j]=0;
    
    if(!rezolvaProblemaReginelor(0))
    {
        printf("Nu exista solutie.");
    }
    
}
