#include "FrenC.h"

énumération Sexe {
    AUCUN,
    MASCULINE,
    FEMININE
};

classe Animal {
    public:
        Animal(corde nom) {
            cette->nom = nom;
        }
        corde prendreNom() {
            retours cette->nom;
        }
        virtuel Sexe prendreSexe() {
            retours Sexe::AUCUN;
        }
        virtuel corde son() {
            retours "";
        }
    privé:
        corde nom;
};

classe Chat : public Animal {
    public:
        Chat(corde nom, booléen estDansCPPM) : Animal(nom) {
            cette->m_estDansCPPM = estDansCPPM;
        }
        booléen estDansCPPM() {
            retours cette->m_estDansCPPM;
        }
        Sexe prendreSexe() surcharge {
            retours Sexe::MASCULINE;
        }
        corde son() surcharge {
            retours "miaou";
        }
    privé:
        booléen m_estDansCPPM;
};

classe Chatte : public Animal {
    public:
        Chatte(corde nom, booléen estDansCPPM) : Animal(nom) {
            cette->m_estDansCPPM = estDansCPPM;
        }
        booléen estDansCPPM() {
            retours cette->m_estDansCPPM;
        }
        Sexe prendreSexe() surcharge {
            retours Sexe::FEMININE;
        }
        corde son() surcharge {
            retours "miaou";
        }
    privé:
        booléen m_estDansCPPM;
};

entier principal() {

    Chat* Marius = nouveau Chat("Marius", Vrai);
    Chat* Marcel = nouveau Chat("Marcel", Faux);
    Chatte* Caroline = nouvelle Chatte("Caroline", Faux);

    vecteur<Animal*> félins = {Marius, Marcel, Caroline};

    pour (automatique & félin: félins) {
        hors << félin->prendreNom() << " dit " << félin->son() << findeligne;
    }

    retours 0;
}