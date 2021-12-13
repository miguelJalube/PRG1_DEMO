//---------------------------------------------------------
// Demo           : 07_amities_fct_operateurs_independantes_amies
// Fichier        : vecteur.h
// Auteur(s)      : BREGUET Guy-Michel
// Date           : 2020-11-30
// But            : operateurs sur vector
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef VECTEURS_H
#define VECTEURS_H

#include <iostream>

class Vecteur {
   friend std::ostream& operator <<(std::ostream& os, const Vecteur& v);
   friend std::istream& operator >>(std::istream& is, Vecteur& v);
   friend bool operator ==(const Vecteur& v1, const Vecteur& v2);
public:
   Vecteur(double x = 0., double y = 0.);
private:
   double x, y;
};

#endif
