#pragma once
class CCarre {
private:
    int sx;   // Coordonn�e x du sommet sup�rieur gauche
    int sy;   // Coordonn�e y du sommet sup�rieur gauche
    int cote;
public:
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);
    void Afficher();
};