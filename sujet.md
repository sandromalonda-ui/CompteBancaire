# Sujet de TP : Gestion d'un Compte Bancaire en C++ (Git & VS Code)

**Objectifs pédagogiques :**
* Structurer et configurer un projet C++ sous **Visual Studio Code**.
* Concevoir et implémenter une classe en C++ (encapsulation, constructeur, destructeur, méthodes métier).
* Écrire un programme de test (`main`) pour valider le comportement de la classe.
* Initialiser un dépôt Git local et publier le code source sur **GitHub**.

---

## 1. Contexte du projet

Vous devez développer un mini-programme en C++ permettant de simuler la gestion basique d'un compte bancaire. Le code source devra être proprement structuré, compilable et versionné via Git, puis publié sur votre compte GitHub.

---

## 2. Spécifications techniques

### La classe `CompteBancaire`

Vous devez créer une classe nommée `CompteBancaire` répartie dans un fichier d'en-tête (`CompteBancaire.h`) et un fichier d'implémentation (`CompteBancaire.cpp`).

#### Attributs (privés)
* `titulaire` (de type `std::string`) : Le nom du propriétaire du compte.
* `solde` (de type `double`) : Le montant actuel disponible sur le compte.
* `numeroCompte` (de type `int`) : Un identifiant unique pour le compte.

#### Méthodes (publiques)
* **Constructeur** : Permet d'initialiser le `titulaire`, le `numeroCompte` et un `soldeInitial` (avec une valeur par défaut à `0.0`). Il devra afficher un message de confirmation lors de la création.
* **Destructeur** : Affiche un message dans la console indiquant la destruction de l'objet (ex: *Destruction du compte N°...*).
* `deposer(double montant)` : Ajoute le montant au solde si le montant est strictement positif. Affiche un message de succès ou d'erreur.
* `retirer(double montant)` : Retire le montant du solde si le montant est positif et que le solde est suffisant. Retourne `true` en cas de succès, `false` sinon.
* `afficherDetails() const` : Affiche proprement les informations du compte (numéro, titulaire, solde). *Indice : cette méthode ne modifie pas l'objet.*

---

## 3. Programme de test (`main.cpp`)

Dans votre fichier `main.cpp`, vous devrez :
1. Instancier au moins un objet `CompteBancaire`.
2. Afficher ses détails initiaux.
3. Effectuer un dépôt valide et un dépôt invalide (montant négatif).
4. Effectuer un retrait valide et un retrait supérieur au solde actuel pour tester la gestion des erreurs.
5. Afficher à nouveau les détails avant la fin du programme.

---

## 4. Modalités de réalisation et de rendu

1. **Environnement** : Créez un dossier de projet sous VS Code et organisez votre code en trois fichiers (`CompteBancaire.h`, `CompteBancaire.cpp`, `main.cpp`).
2. **Git & GitHub** :
   * Initialisez un dépôt Git local dans votre dossier de projet.
   * Réalisez un ou plusieurs commits clairs (ex: *"feat: implementation de la classe CompteBancaire"*).
   * Créez un dépôt distant sur GitHub et poussez votre code sur la branche principale (`main`).
3. **Rendu** : Déposez l'URL de votre dépôt GitHub sur la plateforme du cours.