#include "../include/ship/ship.h"
#include <stdexcept>

/**
 * 
 * @file ship.cpp
 * @author Christian Poli (christian.poli.1@studenti.unipd.it)
 * 
 * @brief Implementation of ship.h
 * 
 * @date 2023-01-17 
 * 
*/

ship::ship(asset _way, coords& _center) {
    way = _way;
    center = _center;
}

char ship::get_alias() const { return alias; }

asset ship::get_way() const { return way; }

std::vector<short> ship::get_hp() const { return hp; }

short ship::get_length() const { return length; }

coords ship::get_center() const {return center; }

void ship::set_center(coords& _center) { center = _center;}

void ship::get_hit(coords& target){
    std::vector<coords> positions;
    positions = get_position(center, length, way); //Take all position occupied by the ship
    
    for(int i = 0; i < length; i++){
        if(positions[i].first == target.first && positions[i].second == target.second) //When we have the hit position we change the hp
            hp[i] = 0;                                                                 //that represents that piece of the ship
    }
}

bool ship::is_dead(){
    short count = 0;
    
    for(int i = 0; i < hp.size(); i++){
        if(hp[i] == 0) count++;    
    }
    
    return hp.size() == count; 
}

void ship::heal(){
    for(int i = 0; i < hp.size(); i++){
        hp[i] = 1;
    }
}

char ship::print(coords& target, coords& center){
    std::vector<coords> positions;
    positions = get_position(center, length, way);

    for(int i = 0; i < length; i++){
        if(target.first == positions[i].first && target.second == positions[i].second){
            if(hp[i] == 0) { 
                return tolower(alias);
            } 
        }
    }
    return alias;
} 