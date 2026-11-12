
#ifndef COMPTE_BANCAIRE_H
#define COMPTE_BANCAIRE_H

#include <string>

class CompteBancaire
{
private:
    std::string titulaire;
    double solde;
    int numeroCompte;

public:
    CompteBancaire(std::string _titulaire, int _numeroCompte, double _solde = 0.0);

    ~CompteBancaire();

    void deposer(double montant);

    bool retirer(double montant);

    void afficherDetails() const;
};

#endif
