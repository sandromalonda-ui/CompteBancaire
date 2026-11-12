
#include <iostream>
#include "CompteBancaire.h"

CompteBancaire::CompteBancaire(std::string _titulaire, int _numeroCompte, double _solde)
{
    titulaire = _titulaire;
    numeroCompte = _numeroCompte;
    solde = _solde;

    std::cout << "Compte bancaire cree avec succes !" << std::endl;
}

CompteBancaire::~CompteBancaire()
{
    std::cout << "Destruction du compte N°" << numeroCompte << std::endl;
}

void CompteBancaire::deposer(double montant)
{
    if (montant > 0)
    {
        solde += montant;
        std::cout << "Depot effectue avec succes !" << std::endl;
    }
    else
    {
        std::cout << "Erreur : montant invalide !" << std::endl;
    }
}

bool CompteBancaire::retirer(double montant)
{
    if (montant > 0 && montant <= solde)
    {
        solde -= montant;
        std::cout << "Retrait effectue avec succes !" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Erreur : retrait impossible !" << std::endl;
        return false;
    }
}

void CompteBancaire::afficherDetails() const
{
    std::cout << "\nNumero : " << numeroCompte << std::endl;
    std::cout << "Titulaire : " << titulaire << std::endl;
    std::cout << "Solde : " << solde << " euros" << std::endl;
}
