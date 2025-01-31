//
// Created by lasma on 31/01/2025.
//
#include<iostream>
#include<array>
#include<vector>

using namespace std;

#ifndef SIMON_H
#define SIMON_H

#endif //SIMON_H



 class Salle {
 public:
     int longueur;
     int largeur; // nombre de cases vides +2 ( prend en compte les murs)
     array<int,2> origin ; // en haut à gauche du rectangle ,  en 0 de l'array la coordonnée horizontale ( longueur) , en 1 de l'array la verticale (largeur)
     vector<array<int,2> > entrances; // liste des coordonnées des entrées, avec le 0 à origine
     Salle(int longueur , int largeur,array<int, 2> origin,vector<array<int,2> > entrances): longueur(longueur),largeur(largeur),origin(origin),  entrances(entrances) {}


 };