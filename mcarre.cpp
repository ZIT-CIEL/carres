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
    cout << "D�placement vers le nord " << endl;
    c1.Afficher();

    // D�placement vers l'est de 10 pixels
    cout << "D�placement vers l'est " << endl;
    c1.Deplacer('e', 10);
    c1.Afficher();

    // D�placement en utilisant dx et dy
    cout << "D�placement avec dx = -3 et dy = 4." << endl;
    c1.Deplacer(-3, 4);
    c1.Afficher();

    return 0;




}