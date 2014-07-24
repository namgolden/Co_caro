//Nam Hai Dinh
//this file is the definition of a battlefield which is an 2 dimensional array

#include "header.h"

class battle_field{
    public: 
        battle_field();
        ~battle_field();
        int play(bool side, int x, int y);
        int check_win();
        int routine();//routine check_win, display the battle field.
};



