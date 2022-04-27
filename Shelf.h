#ifndef SHELF_H
#define SHELF_H

#include <string>
#include "Music_box.h"

class Shelf {
    public:
    //Constructors
    Shelf();
    Shelf(int width);
    
    //States
    int width;
    Music_box* shelfArray;
    
    //Behaviours
    int get_number_of_music_boxes();
    Music_box* get_contents();
    
    bool add_music_box
}