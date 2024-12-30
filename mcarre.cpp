#include<iostream>
#include"carre.h"
#include<stdio.h>
using namespace std;

int main() {

	CCarre c1; 
	CCarre c2;
    CCarre tab[4] = { CCarre(), CCarre(), CCarre(), CCarre()};
    CCarre c4 = CCarre(3 ,4 ,10); 
    CCarre *c5 = new CCarre(3, 4, 10);
	c1.Afficher(); 
	c1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	cout << "SY:" << c1.Getsx() << "SY:" << c1.Getsy() << "cote:" << c1.GetCote();
    cout << "Déplacement vers le nord " << endl;
    c1.Afficher();

    // Déplacement vers l'est de 10 pixels
    cout << "Déplacement vers l'est " << endl;
    c1.Deplacer('e', 10);
    c1.Afficher();

    // Déplacement en utilisant dx et dy
    cout << "Déplacement avec dx = -3 et dy = 4." << endl;
    c1.Deplacer(-3, 4);
    c1.Afficher();
    for (int i = 0; i < 4; i++) {
        int x, y; 
        unsigned int cote ; 
        cout << "entrer le x du carre numero :" <<i+1 << endl; 
        cin >> x; 
        tab[i].Setsx(x);
        cout << "entrer le y du carre numero :" << i + 1 << endl;
        cin >> y; 
        tab[i].Setsy(y);
        cout << "entrer le cote du carre numero :" << i + 1 << endl;
        cin >> cote; 
        tab[i].Setcote(cote);
        tab[i].Afficher();
    }
    cout << "carre numreo 5 :" << endl;
    c4.Afficher();
    cout << "carre numreo 6 (allocation dynamique) :" << endl;
    c5->Afficher();
    delete c5; 
    return 0;




}