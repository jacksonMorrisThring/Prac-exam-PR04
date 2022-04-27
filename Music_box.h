#ifndef MUSIC_BOX
#define MUSIC_BOX

#include <string>

class Music_box {
    public:
    //Constructors
    Music_box();
    Music_box(std::string songName, int width);

    //States
    std::string song;
    int width;

    //Behaviour
    std::string get_song();
    int get_width();

    ~Music_box();
};
#endif