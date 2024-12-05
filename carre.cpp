#include<iostream>
#include "carre.h"
using namespace std;

void CCarre::Setsx(int sx1)
{
	sx = sx1;
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	sy = sy1; 
	this->sx = sy1;
}

void CCarre::Setcote(unsigned int  cote1)
{
	cote = cote1; 
	this->sx = cote1;
}

void CCarre::Afficher()
{
	cout << "sx :" << this->sx << "sy :" << this->sy << "cote:" << this->cote;


}
