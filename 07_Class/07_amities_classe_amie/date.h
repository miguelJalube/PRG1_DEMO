//---------------------------------------------------------
// Demo           : 07_amities_classe_amie
// Fichier        : date.h
// Auteur(s)      : BREGUET Guy-Michel
// Date           : 2020-11-30
// But            : classe date
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef Date_H
#define Date_H

class Date {
   
   friend class Personne;
   
   public:
      Date (const int jour  =    1,
            const int mois  =    1,
            const int annee = 2000);

      Date (const Date& date);

      Date& operator= (const Date& date);

      void afficher() const;

   private:
      int jour;
      int mois;
      int annee;
};

#endif

