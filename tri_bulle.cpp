#include <iostream>
using namespace std;


void remplissage(int tab[], int nbr)
    {
        /*void remplissage est une fontion qui permet de remplir un tableau. Il reçoit en paramètre l'adresse d'un tableau et le nombre d'éléments de ce tableau */
        cout<<"Les lignes qui vont suivre vont vous aider à remplir votre tableau "<<endl;
        for ( int i=0; i<nbr; i++)
        {
            cout<<"veuillez entrer l'élément d'indice "<<i+1<<" de votre tableau: ";
            cin>>tab[i];
        }
    };

void sort_bulle(int sort_table[], int nbr)
    {
        /*la méthode du tri par bulle consite à parcourir un tableau dans l'ordre croisssant des indices, tout en permuttant systématiquement tout paire d'élémnets consécutifs qui ne sont pas dans l'ordre croissant  */

        int min;
        for(int j=0; j<nbr; j++)
        {
            for(int i=0; i<nbr-1; i++)
                {
                    if(sort_table[i]>sort_table[i+1])
                        {
                            min = sort_table[i];
                            sort_table[i] = sort_table[i+1];
                            sort_table[i+1] = min;
                        }
                }
        }

    };

void affichage(int table_receive[], int nbr)
    {
        for(int i=0; i<nbr; i++)
        {
            cout<<table_receive[i]<<" |";
        };
        cout<<endl;
    };


int main()
{
    /*sort_bulle est une fonction qui prend en argument un tableau et sa taille en entier, pour ensuite trier ses élements*/
    int sort_table0[4];

    remplissage(sort_table0, 4);/* appel de la fonction remplissage pour remplir notre d'éléments... */

    cout<<"Affichage du contenu du tableau avant tri "<<endl;
    affichage(sort_table0, 4);

    sort_bulle(sort_table0, 4); /*  appel à la fonction sort_selection pour le tri proprement dit */

    cout<<"Affichage du contenu du tableau après Tri "<<endl;
    affichage(sort_table0, 4);
}
