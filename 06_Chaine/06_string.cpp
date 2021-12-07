//---------------------------------------------------------
// Fichier        : 06_string.cpp
// Auteur(s)      : BREGUET Guy-Michel
// Date           : 2021-12-07
// But            : démontrer les éléments de base des string
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>      // strlen (chaine C)
#include <iomanip>

using namespace std;

//-------------------------------------------------------------------
// afficher s et lister les valeurs ASCII des caractères contenus
void afficher(const string& s);

//-------------------------------------------------------------------
int main() {

   //----------------------------------------------------------------
   cout << endl << "constructeurs"       << endl;
   string str1;                  // string vide
   string str2(3, 'a');          // "aaa"
// string str3(3);               // pas de constructeur
   string str4("une chaine C");
   string str5("un string"s);

   cout << "str1                 : ";           afficher(str1);
   cout << "str2(3, 'a')         : ";           afficher(str2);
   cout << "str4(\"une chaine C\") : ";           afficher(str4);
   cout << "str5(\"un string\"s    : ";           afficher(str5);

   //----------------------------------------------------------------
   cout << endl << "taille et capacite"   << endl;
   cout << "str2                 : ";           afficher(str2);
   cout << "str2.size()          : "   <<       str2.size()       << endl;
   cout << "str2.length()        : "   <<       str2.length()     << endl;
   cout << "str2.capacity()      : "   <<       str2.capacity()   << endl;

   cout << endl;
   cout << "str2.resize(5)"            << endl; str2.resize(5);
   cout << "str2                 : ";           afficher(str2);
   cout << "str2.size()          : "   <<       str2.size()       << endl;
   cout << "str2.length()        : "   <<       str2.length()     << endl;
   cout << "str2.capacity()      : "   <<       str2.capacity()   << endl;

   cout << endl;
   cout << "str2.resize(10, '-')"      << endl; str2.resize(10, '-');
   cout << "str2                 : ";           afficher(str2);
   cout << "str2.size()          : "   <<       str2.size()       << endl;
   cout << "str2.length()        : "   <<       str2.length()     << endl;
   cout << "str2.capacity()      : "   <<       str2.capacity()   << endl;

   cout << endl;
   cout << "str2.resize(8, '-')"       << endl; str2.resize(8, '-');
   cout << "str2                 : ";           afficher(str2);
   cout << "str2.size()          : "   <<       str2.size()       << endl;
   cout << "str2.length()        : "   <<       str2.length()     << endl;
   cout << "str2.capacity()      : "   <<       str2.capacity()   << endl;

   //----------------------------------------------------------------
   cout << endl << "contenu"           << endl;
   cout << "str2.data()          : "   <<       str2.data()       << endl;
   cout << "str2.c_str()         : "   <<       str2.c_str()      << endl;
   cout << "strlen(str2.data())  : "   <<strlen(str2.data())      << endl;
   cout << "strlen(str2.c_str()) : "   <<strlen(str2.c_str())     << endl;


   return EXIT_SUCCESS;
}

//----------------------------------------------------------------
void afficher(const string& s) {
   cout << left << setw(15) << s;
   cout << "\t=> ";
   for (char c : s)
      cout << (unsigned short int)c << "  ";
   cout << endl;
}


//      constructeurs
//      str1                 :                   =>
//      str2(3, 'a')         : aaa               => 97  97  97
//      str4("une chaine C") : une chaine C      => 117  110  101  32  99  104  97  105  110  101  32  67
//      str5("un string"s    : un string         => 117  110  32  115  116  114  105  110  103
//
//      taille et capacite
//      str2                 : aaa               => 97  97  97
//      str2.size()          : 3
//      str2.length()        : 3
//      str2.capacity()      : 22
//
//      str2.resize(5)
//      str2                 : aaa               => 97  97  97  0  0
//      str2.size()          : 5
//      str2.length()        : 5
//      str2.capacity()      : 22
//
//      str2.resize(10, '-')
//      str2                 : aaa  -----        => 97  97  97  0  0  45  45  45  45  45
//      str2.size()          : 10
//      str2.length()        : 10
//      str2.capacity()      : 22
//
//      str2.resize(8, '-')
//      str2                 : aaa  ---          => 97  97  97  0  0  45  45  45
//      str2.size()          : 8
//      str2.length()        : 8
//      str2.capacity()      : 22
//
//      contenu
//      str2.data()          : aaa
//      str2.c_str()         : aaa
//      strlen(str2.data())  : 3
//      strlen(str2.c_str()) : 3
//      Program ended with exit code: 0
