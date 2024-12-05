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
	cout << "SY :" << c1.Getsx() << "SY:" << c1.Getsy() << " cote:" << c1.GetCote();





}