class CompteBancaire
{
    private :
    std::string titulaire ;
    double solde ;
    int numeroCompte ;

    public :
    CompteBancaire(std::string _titulaire, int _numeroCompte,double _solde=0.0) ;
    void deposer(double montant);
    void retirer(double montant);
    void afficherDetails() const ;
};