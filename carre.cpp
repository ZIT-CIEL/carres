#include<iostream>
#include "carre.h"
using namespace std;

void CCarre::Setsx(int sx1)
{
	
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	
	this->sy = sy1;
}

void CCarre::Setcote(unsigned int  cote1)
{
	
	this->cote = cote1;
}

int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::Afficher()
{
	cout << "sx :" << this->sx << "sy :" << this->sy << "cote:" << this->cote<<endl;


}
