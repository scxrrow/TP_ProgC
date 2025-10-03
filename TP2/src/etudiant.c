#include <stdio.h>

int main() {

    char noms[5][30] = {
        "FELTEN",
        "DUPONT",
        "MARTIN",
        "DUBOIS",
        "PETIT"
    };
    
    char prenoms[5][30] = {
        "Noah",
        "Marie",
        "Jean",
        "Sophie",
        "Pierre"
    };
    
    char adresses[5][100] = {
        "123 rue de Paris, 75001 Paris",
        "45 avenue Victor Hugo, 75016 Paris",
        "78 boulevard Saint-Michel, 75005 Paris",
        "12 rue du Commerce, 75015 Paris",
        "34 rue de la Paix, 75002 Paris"
    };
    
    float notes_prog[5] = {15.5, 14.0, 16.5, 13.5, 17.0};
    float notes_sys[5] = {14.0, 15.5, 13.0, 16.0, 15.5};
    
    printf("Liste des étudiants et leurs notes :\n\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Étudiant %d:\n", i+1);
        printf("Nom: %s\n", noms[i]);
        printf("Prénom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note en Programmation C: %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation: %.2f\n", notes_sys[i]);
        printf("------------------------\n");
    }
}
