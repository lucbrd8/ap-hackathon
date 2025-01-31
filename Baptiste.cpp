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
    system("clear"); // Utiliser "cls" sous Windows
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (x == playerX && y == playerY)
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
            case 'z': if (playerY > 0) playerY--; break;
            case 's': if (playerY < HEIGHT - 1) playerY++; break;
            case 'q': if (playerX > 0) playerX--; break;
            case 'd': if (playerX < WIDTH - 1) playerX++; break;
        }
    }

    return 0;
}
