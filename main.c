//This program Created By Soui for github SouiInSpace
//This program is free but dont delete the coopyright thank you ^^
#include <stdio.h>
#include <stdlib.h>
#include<math.h> // il faut utiliser la biblioth�que math pour sqrt = racine

int main()
{

    //initialisations des variables
    float a,b,c =0;
    float x1,x2=0;
    float d=0;

    //Entrez les valeurs pour calculer le delta
    printf("Entrez la valeur de a:\n");
    scanf("%f",&a);
    printf("Entrez la valeur de b: \n");
    scanf("%f",&b);
    printf("Entrez la valeur de c: \n");
    scanf("%f",&c);;

    //Calcul de Delta
    d=b*b-4*a*c;

   //chercher les diff�rentes solutions
   //Si delta est sup�rieur � 0 = 2 possibilit�es
   //si delta est inf�rieur � 0 = 0 possibilit�e
   // si delta est �gal � 0 = 1 posibilit�e

    if(d>0) //Si delta est sup�rieur � 0
{
    printf("le delta est positif il y'a donc deux solutions possibles : \n");
    x1 =(-b-sqrt(d))/(2*a);
    x2 =(-b+sqrt(d))/(2*a);
    printf("x1 = %f et x2=%f",x1,x2);
}
else { //si delta est n�gatif
    printf("Votre delta est negatif l'equation n'a aucune solution !");
}
if(d=0) { //si delta esqt �gal � 0
    printf("Votre delta est egal a 0, votre equation n'a qu'une solution \n");
    x1 =(-b-sqrt(d))/(2*a);
    printf("x1=%f",x1);
}
    return 0;
}
