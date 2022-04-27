#include "Music_box.h"
#include "Shelf.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Music_box aBox("poker", 15);

    cout << "the music box has song " << aBox.get_song() << " and has width " << aBox.get_width() << endl;

    Music_box bBox("Morepoker", 15);

    cout << "the music box has song " << bBox.get_song() << " and has width " << bBox.get_width() << endl;

    Shelf shelf1;
    Shelf shelf2(150);



    cout << "width of shelf is " << shelf2.get_width() << endl;

    cout << "shelf has " << shelf2.get_number_of_music_boxes() << " boxes on it" <<endl;
    cout << "size of shelfArray pointer is " << sizeof(shelf2.get_contents()) << " bytes" << endl;

    //adding music box
    cout << "result of attemting to dd to shelf is... "<<endl<< shelf2.add_music_box(aBox) << endl;
    cout << "shelf has " << shelf2.get_number_of_music_boxes() << " boxes on it" <<endl;
    cout << "result of attemting to add another box to shelf is... "<<endl<< shelf2.add_music_box(bBox) << endl;
    cout << "shelf has " << shelf2.get_number_of_music_boxes() << " boxes on it" <<endl;

    Music_box cBox;
    Music_box dBox("American pie", 121);

    cout << "result of attemting to add another box to shelf is... "<<endl<< shelf2.add_music_box(cBox) << endl;
    cout << "shelf has " << shelf2.get_number_of_music_boxes() << " boxes on it" <<endl;

    cout << "ADDING FINAL BOX "<<endl<< shelf2.add_music_box(dBox) << endl;
    cout << "shelf has " << shelf2.get_number_of_music_boxes() << " boxes on it" <<endl;







    return 0;
}