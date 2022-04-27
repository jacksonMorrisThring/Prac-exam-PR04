#include "Music_box.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Music_box aBox("poker", 15);

    cout << "the music box has song " << aBox.get_song() << " and has width " << aBox.get_width() << endl;


    return 0;
}