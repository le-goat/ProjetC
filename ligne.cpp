//
// Created by caspar.gauthier on 11/05/2020.
//


#include "ligne.h"
#include <deque>

Ligne::Ligne(int type) {
    if (int type = 0) { // 0 est équivalent à une ligne sans obstacles
        Obstacle ob{0, 0};

    }if (int type = 1) { // 1 est équivalent à une ligne avec des obstacles statiques
        Obstacle ob{1, 0};

    }if (int type = 2) { // 2 est équivalent à une ligne avec des obstacles en mouvement de type voiture
        Obstacle ob{2, 2};

    }if (int type = 3) { // 3 est équivalent à une ligne avec des obstacles en mouvement de type camion
        Obstacle ob{3, 1};

    }if (int type = 4) { // 4 est équivalent à une ligne de type rivière (obstaces = eau)
        //définir une valeur random pour la largeur et la vitesse des obstacles
        Obstacle ob{0, 0};

    }
    //lane.push_front() //

}