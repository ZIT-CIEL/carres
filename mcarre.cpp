#include<iostream>
#include"carre.h"
using namespace std;

int main() {

	CCarre c1; 
	CCarre c2;
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

    return 0;




}