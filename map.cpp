//
// Created by caspar.gauthier on 22/04/2020.
//

#include "map.h"
#include "ligne.h"
#include <deque>

Map::Map(int width, int height) {
    for (int i = 0; i < height; i++){
        //random type of lane
//        int type = rand() % 4;
        Ligne lane(Ligne::Type::VIDE, i);
        lanes.push_front(lane);
    }
}
