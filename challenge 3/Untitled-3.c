//challenge 3
#include <stdio.h>

// Définition de la structure Rectangle
struct Rectangle {
    float longueur;
    float largeur;
};

// Fonction pour calculer l'aire
float calculerAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rectangle;

    // Saisie des dimensions du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &rectangle.longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rectangle.largeur);

    // Calcul et affichage de l'aire
    float aire = calculerAire(rectangle);
    printf("L'aire du rectangle est : %.2f\n", aire);

    return 0;
}
