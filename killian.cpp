





class Player {
public:
  int position_x;
  int position_y;
  int health;
public:
  Player(int position_x,int position_y,int health) : position_x(position_x),position_y(position_y),health(health){}
  void goRight() {


  }
  void goLeft() {



  }
  void goUp() {

  }
  void goDown() {


  }
};






#include <iostream>
#include <vector>

// Dimensions du donjon
const int WIDTH = 6;
const int HEIGHT = 7;

// Position du joueur
int playerX = WIDTH / 2;
int playerY = HEIGHT / 2;

// Fonction pour dessiner le donjon et le joueur
void draw(const std::vector<std::string> &map) {
  Player joueur(0, 0, 100);
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
  Player joueur(0, 0, 100);

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
      case 'd': if (joueur.position_x < WIDTH - 1) joueur.position_y++; break;
    }
  }

  return 0;
}
