#include <stdio.h>
#include <string.h>

 struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];
    
    // Initialisation du premier étudiant
    strcpy(etudiants[0].nom, "FELTEN");
    strcpy(etudiants[0].prenom, "Noah");
    strcpy(etudiants[0].adresse, "123 rue de Paris, 75001 Paris");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys = 14.0;

    // Initialisation du deuxième étudiant
    strcpy(etudiants[1].nom, "DUPONT");
    strcpy(etudiants[1].prenom, "Marie");
    strcpy(etudiants[1].adresse, "45 avenue Victor Hugo, 75016 Paris");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 15.5;

    // Initialisation du troisième étudiant
    strcpy(etudiants[2].nom, "MARTIN");
    strcpy(etudiants[2].prenom, "Jean");
    strcpy(etudiants[2].adresse, "78 boulevard Saint-Michel, 75005 Paris");
    etudiants[2].note_prog = 16.5;
    etudiants[2].note_sys = 13.0;

    // Initialisation du quatrième étudiant
    strcpy(etudiants[3].nom, "DUBOIS");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "12 rue du Commerce, 75015 Paris");
    etudiants[3].note_prog = 13.5;
    etudiants[3].note_sys = 16.0;

    // Initialisation du cinquième étudiant
    strcpy(etudiants[4].nom, "PETIT");
    strcpy(etudiants[4].prenom, "Pierre");
    strcpy(etudiants[4].adresse, "34 rue de la Paix, 75002 Paris");
    etudiants[4].note_prog = 17.0;
    etudiants[4].note_sys = 15.5;

    // Affichage des informations
    printf("\n--- Liste des étudiants ---\n");
    for(int i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation C : %.2f\n", etudiants[i].note_prog);
        printf("Note en Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("------------------------\n");
    }

    return 0;
}
