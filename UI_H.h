#ifndef UI_H_H_INCLUDED
#define UI_H_H_INCLUDED
#include"Controller_H.h"

class UI{

    public:
        Controller controller;
        UI(Controller &con);
        void meniu();


};


#endif // UI_H_H_INCLUDED
