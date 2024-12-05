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
    int Getsx();
    int Getsy();
    int GetCote();
    void Afficher();
    // "Déplace" le carré sans le dessiner. Les attributs x et y  
    // sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entrées : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de déplacement du carré 
    // Sortie : Aucune 
    void Deplacer(char direction, int saut);

};