//challenge 5
#include <stdio.h>
#include <string.h>

// Définition de la structure Livre
struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

// Fonction pour créer un livre
struct Livre creerLivre(const char *titre, const char *auteur, int annee) {
    struct Livre livre;
    strcpy(livre.titre, titre);   
    strcpy(livre.auteur, auteur);  
    livre.annee = annee;           
    return livre;                  
}

int main() {
    // Création d'un livre
    struct Livre monLivre = creerLivre("1963", "johnny depp", 1949);

    // Affichage des informations du livre
    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Année : %d\n", monLivre.annee);

    return 0;
}

