#include <cstdlib>





class Player {
public:
  int position_x;
  int position_y;
  int health;
public:
  Player(int position_x,int position_y,int health) : position_x(position_x),position_y(position_y),health(health){}

};

class Bat {
public:
  int pos_x;
  int pos_y;
  int health;
  Bat(int pos_x, int pos_y, int health): pos_x(pos_x), pos_y(pos_y), health(health){}
  void apparition() {
     //NumberRoom
    int pos_x = Salle.Origine[0] + Salle.longueur/2;
    int pos_y = Salle.Origine[1] + Salle.largeur/2;

  }
  void gotHit() {


  }


};







#include <iostream>
#include <vector>

// Dimensions du donjon
const int WIDTH = 20;
const int HEIGHT = 20;

// Position du joueur
int playerX = WIDTH / 2;
int playerY = HEIGHT / 2;


Player joueur(4, 4, 100);
// Fonction pour dessiner le donjon et le joueur
void draw(const std::vector<std::string> &map) {

  system("clear"); // Utiliser "cls" sous Windows
  for (int y = 0; y < HEIGHT; ++y) {
    for (int x = 0; x < WIDTH; ++x) {
      if (x == joueur.position_x && y == joueur.position_y)
        std::cout << '@'; // Symbole du joueur
      else
        std::cout << map[y][x];
    }
    std::cout << '\n';
  }
}

int main() {


  std::vector<std::string> map(HEIGHT, std::string(WIDTH, '.'));

  char ch;
  while (true) {
    draw(map);
    std::cout << "Déplacez-vous avec ZQSD, F pour quitter: ";
    std::cin >> ch;

    if (ch == 'f') break;
    switch (ch) {
      case 'z': if (joueur.position_y > 0) joueur.position_y--; break;
      case 's': if (joueur.position_y < HEIGHT - 1) joueur.position_y++; break;
      case 'q': if (joueur.position_x > 0) joueur.position_x--; break;
      case 'd': if (joueur.position_x < WIDTH - 1) joueur.position_x++; break;
    }
  }

  return 0;
}
