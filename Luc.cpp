#include <iostream>
#include <cstdlib>
#include "simon.h"
#include "Simon.cpp"
bool salle_possible (Salle s, char donjon) {
    for (int i=0; i<s.longueur; i++) {
        for (int j=0; j<s.largeur;j++) {
            int x =s.origin[0]+i;
            int y = s.origin[1] +j
            if (x<LENGHT_BOARD and y<WIDTH_BOARD) {
                if(donjon[x][y]!=' ') {
                    return false
                }
            } else {
                return false
            }
        }
    }
    return true;
    }