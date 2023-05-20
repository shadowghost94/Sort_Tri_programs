#include <iostream>
using namespace std;

void remplissage(int &tab[], int nbr)
    {
        /*void remplissage est une fontion qui permet de remplir un tableau. Il reçoit en paramètre l'adresse d'un tableau et le nombre d'éléments de ce tableau */
        for ( int i=0; i<nbr; i++)
        {
            cout<<"Les lignes qui vont suivre vont vous aider à remplir votre tableau "<<endl;
            cout<<"veuillez entrer l'élément d'indice "<<i+1<<"de votre tableau: "<<endl;
            cin>>tab[i];
        }
    };


void sort_selection(int *sort_table[], int nbr)
    {
            /*cette fonction lui éffectue le trie proprement dit*/

        int sort_table0[nbr];   /*initialisation dun tableau sort_table0 de taille nbr*/
        int min,init=0;         /*initialisation de min et de init*/
        min=sort_table[0];      /*affectation de la première valeur du tableau reçu en paramètre à min*/

        for(int i=0; i<nbr; i++){

/**
 * on initialise le compteur j à init afin de pouvoir décrémenté et réinitialiser de nouveau j de tel sorte sorte
 * que les valeurs déja trié ne soit plus prise en compte
 @pre j=init
 @post
 *durant le parcours du tableau par la boucle, si on trouve une valeur qui est inférieur à min alors cette valeur *deviendra notre nouveau minimum
 @result
 */
            for(int j=init; j<nbr; j++)
                {
                    if(min>sort_table[j])
                    {
                        min=sort_table[j];
                    }
                }
        sort_table0[i]=min;
        init++;
        }
/*recopiage des éléments de sort_table0 dans sort_table afin d'avoir un tableau trier dans le main*/

    for(int i=0; i<nbr; i++)
    {
        sort_table[i]=sort_table0[i];  /*affectation des valeurs du tableau sort_table0 aux éléments du tableau sort_table0*/
    }

    };

void affichage(int table_receive[], int nbr)
{
    for(int i=0; i<nbr; i++)
    {
        cout<<table_receive[i]<<" | ";
    };
};

int main()
{
    /*sort_selection est une fonction qui prend en argument l'adresse d'un tableau et sa taille en entier, pour ensuite trier ses élements*/
    int sort_table0[4];

    remplissage(sort_table0, 4);/* appel de la fonction remplissage pour remplir notre d'éléments... */

    cout<<"Affichage du contenu du tableau avant tri "<<endl;
    affichage(sort_table0);

    sort_selection(&sort_table0, 4); /*  appel à la fonction sort_selection pour le tri proprement dit */

    cout<<"Affichage du contenu du tableau après Tri "<<endl;
    affichage(sort_table0, 4);
}
