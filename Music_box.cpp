using namespace std;
#include <iostream>
#include "Music_box.h"

Music_box::Music_box(){
    song = "null";
    width = 0;
}

Music_box::Music_box(string songName, int width){
    song = songName;
    this->width = width;

    //cout << "Created music box with name " << song << "and width " << width << endl;
}

string Music_box::get_song(){
    return song;
}

int Music_box::get_width(){
    return width;
}

Music_box::~Music_box(){
    //cout << "Destroying music box" << endl;
}