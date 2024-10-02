//challenge 2
#include <stdio.h>

#define MAX_NOTES 5 // Nombre maximum de notes

// Définition de la structure Étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];
};

int main() {
    struct Etudiant etudiant;

    // Assignation des valeurs
    // Nom et prénom
    printf("Entrez le nom de l'étudiant : ");
    scanf("%49s", etudiant.nom);
    printf("Entrez le prénom de l'étudiant : ");
    scanf("%49s", etudiant.prenom);
    
    // Notes
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("Entrez la note %d : ", i + 1);
        scanf("%d", &etudiant.notes[i]);
    }

    // Affichage des informations de l'étudiant
    printf("\nNom: %s\n", etudiant.nom);
    printf("Prénom: %s\n", etudiant.prenom);
    printf("Notes: ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}
