#include "simon.h"
#include <iostream>
#include<array>
using namespace std;
// Created by lasma o
// n 31/01/2025.
//

char donjon[50][50] ;
void initialize() {
    for(int i=0;i<50;i++) {
        for(int j=0;j<50;j++) {
            donjon[i][j]=' ';
        }
    }
}


void addroom(Salle s) {
    array<int , 2> start = s.origin ;
    int a = s.longueur;
    int b = s.largeur ;
    for  (int i =0; i< a+1; i++) {
        donjon[start[0]+i][start[1]] = '-' ;
    }
    for  (int i =1; i< b; i++) {
        donjon[start[0]][start[1]+i] = '|' ;
        for (int j =1; j< a; j++) {

            donjon[start[0]+j][start[1]+i] = '.';
        }
        donjon[start[0]+a][start[1]+i] = '|' ;
    }
    for  (int i =0; i< a+1; i++) {
        donjon[start[0]+i][start[1]+b] = '-' ;
    }
    for (auto entry : s.entrances) {
        donjon[entry[0]+start[0]][entry[1]+start[1]] = '+' ;
    }

}
void printDonjon() {
    for (int i =0; i< 50; i++) {
        for (int j =0; j< 50; j++) {
            cout << donjon[j][i];
        }
        cout << endl;
    }
}


int main(){
    initialize();
    Salle Room1 = Salle(5,5,{10,10},{{0,4},{5,2}});
    addroom(Room1);
    printDonjon();



    return 0;
}