//challenge 1
#include <stdio.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne;

    // Assignation des valeurs
    snprintf(personne.nom, sizeof(personne.nom), "anouar");
    snprintf(personne.prenom, sizeof(personne.prenom), "ezzaibi");
    personne.age = 26;

    // Affichage des valeurs
    printf("Nom: %s\n", personne.nom);
    printf("Prénom: %s\n", personne.prenom);
    printf("Âge: %d\n", personne.age);

    return 0;
}
