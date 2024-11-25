#include <stdio.h>
#include <string.h>

//declaration de date  
typedef struct {
    int jour;
    int mois;
    int annee;
} date;

//declaration du tache
typedef struct {
    char titre[50];
    char description[200];
    int priorite;
    date Dates;
} Tache;


//stocker les donner du tache dans un tableau 
Tache tableau;

void ajouter() {
    printf("Donner le titre:\n");
    scanf("%s", tableau.titre);  
    
    printf("Donner la description:\n");
    scanf("%s", tableau.description);  
    
    printf("Donner la priorite (1=higt, 2=low):\n");
    scanf("%d", &tableau.priorite);
    
    printf("Donner la date (jour mois annee):\n");
    scanf("%d %d %d", &tableau.Dates.jour, &tableau.Dates.mois, &tableau.Dates.annee);
}

   //affichage du titre & description
    void afficher() {
    printf("Titre: %s\n", tableau.titre);
    printf("Description: %s\n", tableau.description);
    
    // Afficher la priorite
    if (tableau.priorite == 1) {
        printf("priorite:hight \n");
    } else if (tableau.priorite == 2) {
        printf("priorite:low\n");
    } else {
        printf("Priorité introuvable!\n");
    }
    
    
    // Afficher la date
    printf("Date: %d/%d/%d\n", tableau.Dates.jour, tableau.Dates.mois, tableau.Dates.annee);
}



    int main() {

    //premier etape afficher menu des operation 
    printf("Menu:\n");
    printf("selectionner choix , pour votre tache!\n");
    printf("1: Ajouter\n");
    printf("2: Afficher\n");
    printf("3: Modifier\n");
    printf("4: Supprimer\n");
    

   //declaration d'affichage l'ordre d'entrer un choix
    int choix;
    
    do {
        printf("Donner votre choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
            ajouter();
                break;
                
            case 2:
            afficher();
                break;
        
            default:
            printf("pardon! votre Choix est introuvable!\n");
        }
        
    } while (choix != 2);  
    
    
    return 0;
}