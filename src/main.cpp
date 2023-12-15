#include <iostream>
using namespace std;

int main() {
  // variable permettant de compter le nombre de places disponibles
  int nbrePlaces = 10;
  // variable permettant de récupérer le choix de l'utilisateur
  int choix;
  cout << "************ Evaluation 2 ************" << endl << endl;
  // partie à compléter à partir du 3.1
  cout << "" << endl <<endl;
  cout << "1 - Entrée dans le parking" << endl <<endl;
  cout << "2 - Nombre de places disponibles" << endl <<endl;
  cout << "3 - Sortie du parking" << endl <<endl;
  cout << "4 - Quitter" << endl <<endl;
  cout << "" <<endl <<endl;
  std::cin >> choix;
  std::cout << "Vous avez saisi : " << choix << std::endl;

  return 0;
}
