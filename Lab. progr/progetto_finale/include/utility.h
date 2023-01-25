/* 
    BASTIANELLO MATTIA
*/
#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "../include/ship/movement.h"

/**
 * @brief Get the prow stern object
 * 
 * @param c as 'coords&' center of the ship
 * @param a as 'asset' asset of the ship
 * @param alias as 'char' alias of the ship as 'C' or 'S' or 'E'
 * @return std::string string that contains prow and stern
 */
std::string get_prow_stern(coords& c, asset a, char alias);
/**
 * @brief convert two coords in std::string
 * 
 * @param c1 as 'coords&' stern
 * @param c2 as 'coords&' prow
 * @return std::string 
 */
std::string two_coords_to_string(coords& c1, coords& c2);

/**
 * @brief Get the center of the ship 
 * 
 * @param v as 'std::vector<coords>' vector with size 2 of coords with v[0]=prow v[1]=stern
 * @return coords center of the ship
 */
coords get_center(std::vector<coords> v);

/**
 * @brief Get the asset of the ship
 * 
 * @param v as 'std::vector<coords>' vector with size 2 of coords with v[0]=prow v[1]=stern
 * @param letter as 'char' alias of the ship as 'C' or 'S' or 'E'
 * @return asset 
 */
asset get_asset(std::vector<coords> v, char letter);

/**
 * @brief generate random coords range of x,y [0,11]
 * 
 * @return coords 
 */
coords generate_rnd_coords();

/**
 * @brief generate random asset
 * 
 * @return asset 
 */
asset generate_rnd_asset();

#endif