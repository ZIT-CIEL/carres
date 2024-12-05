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
    int Getsx();
    int Getsy();
    int GetCote();
    void Afficher();
    // "D�place" le carr� sans le dessiner. Les attributs x et y  
    // sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entr�es : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de d�placement du carr� 
    // Sortie : Aucune 
    void Deplacer(char direction, int saut);

};