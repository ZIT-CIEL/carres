#pragma once
class CCarre {
private:
    int sx;   // Coordonnée x du sommet supérieur gauche
    int sy;   // Coordonnée y du sommet supérieur gauche
    int cote;
public:
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);
    void Afficher();
};