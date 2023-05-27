#include <stdio.h>
#include <stdlib.h>
#define max 100

int ALGORITHME_recherche (int V[max],int val,int m)
{
        int i, trouve;
        i = 1;
    trouve = 0;
    while(i<=m && !trouve)
    {
        if(V[i]== val)
        {
            trouve = 1;
        }
        else
        {
            i++;
        }
    }
    if(trouve == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int V[max],i,m,val,resul;
    printf("entrer la taille : ");
    scanf("%d",&m);
    printf("remplir le vecteur.\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&V[i]);
    }
    printf("affichage du vecteur.\n");
        for(i=0;i<m;i++)
    {
        printf("%d\n",V[i]);
    }
    printf("entrer la valeur a rechercher :\t");
    scanf("%d",&val);
   resul = ALGORITHME_recherche(V,val,m);
    if(resul == 1)
    {
        printf("la valeur %d existe dans le vecteur.\n",val);
    }
    else
    {
        printf("cet valeur n'est pas dans le vecteur.\n");
    }
    return 0;
}
