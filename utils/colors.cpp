#include <ncurses.h>

class Colors {

    public: 
     int greenColor;
     int yellowColor;
     int redColor;

     ~Colors(){
        init_pair(1, COLOR_GREEN, COLOR_BLACK);
        init_pair(2, COLOR_YELLOW, COLOR_BLACK);
        init_pair(3, COLOR_RED, COLOR_BLACK);

        greenColor = COLOR_PAIR(1);
        yellowColor = COLOR_PAIR(2);
        redColor = COLOR_PAIR(3);
    }

};
