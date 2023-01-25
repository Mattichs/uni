#include "../include/ship/corazzata.h"

/**
 * 
 * @file corazzata.cpp
 * @author Christian Poli (christian.poli.1@studenti.unipd.it)
 * 
 * @brief Implementation of corazzata.h
 * 
 * @date 2023-01-17 
 * 
*/

corazzata::corazzata(asset way, coords& center) : ship(way, center){
	alias = 'C';
	hp = {1, 1, 1, 1, 1};
	length = 5;
}
