#include <stdio.h>
#include <stdlib.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
    int mystere = rand()%100;
    int i = 0;
    while (1)
    {
        scanf("%d",&i);
        if(choix_joueur < i)
        {
            printf("PLUS\n");
        }
        else if(choix_joueur == i)
        {
            printf("BINGO\n");
        }
        else
        {
            printf("MOINS\n");
        }
}

int main()
{
    srand((unsigned int)time(NULL));
    int jeux = 0;
    do
    {
        scanf("%d", &jeux);
        switch (jeux)
        {
            case 1:
        {
            printf("Veuillez entrer votre choix:\n");
            plus_moins();
            break;
        }
            case 2:
                {
                    printf("GAME OVER\n");
                    break
                }
            default
            {
                printf("error, please re enter\n");
            }
        }
    } while (jeux);
}

