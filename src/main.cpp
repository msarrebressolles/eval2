#include <iostream>
using namespace std;

int main() {
  // variable permettant de compter le nombre de places disponibles
  int nbrePlaces = 10;
  // variable permettant de récupérer le choix de l'utilisateur
  int choix;
  do {
    cout << "************ Evaluation 2 ************" << endl << endl;
    // partie à compléter à partir du 3.1
    cout << "" << endl << endl;
    cout << "1 - Entrée dans le parking" << endl << endl;
    cout << "2 - Nombre de places disponibles" << endl << endl;
    cout << "3 - Sortie du parking" << endl << endl;
    cout << "4 - Quitter" << endl << endl;
    cout << "" << endl << endl;
    std::cin >> choix;
    std::cout << "Vous avez saisi : " << choix << std::endl;
    // traitement du choix de l'utilisateur
    switch (choix) {
    case 1:
      // parking plein
      if (nbrePlaces == 0) {
        std::cout << "\n";
        std::cout << "PARKING COMPLET\n";
      } else {
        (nbrePlaces--);
      }
      break;
    case 2:
      std::cout << "\n";
      std::cout << "Nombre de places disponibles :\n";
      // affichage complet
      if (nbrePlaces == 0) {
        std::cout << "\n";
        std::cout << "PARKING COMPLET\n";
      } else {
        std::cout << nbrePlaces;
      }
      break;
    case 3:
      // parking vide
      if (nbrePlaces == 10) {
        std::cout << "10 places disponibles\n";
      } else {
        (nbrePlaces++);
      }
      break;
    case 4:
      std::cout << "\n";
      std::cout << "Au-revoir\n";
      break;
    default:
      std::cout << "Vous n'avez pas choisi un nombre valide\n";
    }
    cout << "" << endl << endl;
    cout << "" << endl << endl;
    cout << "" << endl << endl;
  } while (choix != 4);
  return 0;
}