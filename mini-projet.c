#include <stdio.h>
#include <stdlib.h>
//les variables globale
int nbr;
//La fin du variables global

// La structure
struct stagiaire
{
    char mat[25];
    char nom[30];
    char pre[30];
    char fill[15];
    float moy;
};
// la fin de la structure

//Le remplissage du stagiaire
void remp(struct stagiaire stage[nbr],int nb){
if(nb == 0){
    printf("\nVous pouver definir le nombre du stagiaires et pour faire ca veuiller Entrer le nombre 1 !!!\n");
}
else{
int i;
for(i=0;i<nb;i++)
    {

        printf("\nLe stagiare nm : %d\n",i+1);
        fflush(stdin);
        printf("Saisir le matricule : ");
        gets(stage[i].mat);
        fflush(stdin);
        printf("Saisir le nom : ");
        gets(stage[i].nom);
        fflush(stdin);
        printf("Saisir le prenom : ");
        gets(stage[i].pre);
        fflush(stdin);
        printf("Saisir la filliere : ");
        gets(stage[i].fill);
        printf("Saisir la moyenne : ");
        scanf("%f",&stage[i].moy);
}
}
}
//La fin du remplissage du stagiaire

//le tri des stagiaire
void tri(struct stagiaire stage[nbr],int nb){
if(nb == 0){
    printf("\nVous n avez saisi aucun information pour les stagiaires !!!\n");
}
else{
printf("\na- Tri par nom\n");
printf("b- tri par moyenne\n");
char tchoix;
printf("Entrer votre choix pour trier les stagiaire : ");
scanf("%s",&tchoix);
struct stagiaire temp;
int i;
for(i=0 ;i<nb-1 ;i++){
    if(stage[i].moy > stage[i+1].moy){
        temp = stage[i];
        stage[i] = stage[i+1];
        stage[i+1] = temp;
        i = -1;
    }
}
printf("\nLes stagieres sont trie\n");
}
}
//la fin du tri des stagiaire

//La consultation des stagiere
void consult(struct stagiaire stage[nbr],int nb){
int i;
if(nb == 0){
    printf("\nVous n avez saisi aucun information pour les stagiaires !!!\n");
}
else{
char cochoix;
printf("a- par stagiaire\n");
printf("b- generale\n");
printf("Entrer votre choix pur la consultation : ");
scanf("%s",&cochoix);
if(cochoix == 'b'){
for(i=0;i<nb;i++){
    printf("\n%d)  le matricule = %s\t",i+1,stage[i].mat);
    printf("le nom = %s\t",stage[i].nom);
    printf("le prenom = %s\t",stage[i].pre);
    printf("la filliere = %s\t",stage[i].fill);
    printf("la moyenne = %f\t",stage[i].moy);
    printf("\n");
}
}
else {
    for(i=0;i<nb;i++){
    printf("%d)  le nom = %s\t",i+1,stage[i].nom);
    printf("le prenom = %s\t",stage[i].pre);
    printf("\n");
}
}
}
}
//La fin du consultation des stagiere
int main()
{
    //intialisation de la structure
    struct stagiaire stage[250];
    int nb;


    // La creation du list
    printf("1) Definir du nombre de stagiaires \n\n");
    printf("2) Saisie des informations des stagiaires \n\n");
    printf("3) Trier les stagiaires \n\n");
    printf("4) Consultation des stagiaire \n\n");
    printf("5) Quitter \n");
    // La fin de la creation du list

    //La selectionne du nombre
    int choix;
    do{
    printf("\nEntrer Votre  choix : ");
    scanf("%d",&choix);
    // La prise de décision
        switch(choix){
        case 1 : printf("\nDefinir le nombre du stagiaires : ");
                scanf("%d", &nb);
                break;

        case 2 : remp(stage,nb);
                break;

        case 3 : tri(stage,nb);
                break;

        case 4 : consult(stage,nb);
                break;
        }
    }while(choix!=5);
    // La fin de la prise de décision
}

