#include <iostream>
#include "Shelf.h"
using namespace std;

Shelf::Shelf(){
    width = 0;
    shelfArray = new Music_box[width];
    boxCounter = 0;
    widthRemaining = width;

    cout << "created shelf with default constructor" << endl;
}

Shelf::Shelf(int width){
    this->width = width;
    shelfArray = new Music_box[width];
    boxCounter = 0;
    widthRemaining = width;

    // cout << "created shelf with width specific constructor" << endl;
}

int Shelf::get_width(){
    return width;
}

int Shelf::get_number_of_music_boxes(){
    return boxCounter;
}

Music_box* Shelf::get_contents(){
    return shelfArray;
}

bool Shelf::add_music_box(Music_box box){
    // cout << "width remaining: " << widthRemaining << endl;
    if(widthRemaining >= box.get_width()){
        widthRemaining = widthRemaining - box.get_width();
        boxCounter++;
        shelfArray[boxCounter] = box;
        // cout << "width remaining is now: " << widthRemaining << endl;
        return true;
    }
    return false;
}

Shelf::~Shelf(){
    // cout << "destroying shelf with width " << this-> width<< endl;
    delete[] shelfArray;
}