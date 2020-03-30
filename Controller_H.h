#ifndef CONTROLLER_H_H_INCLUDED
#define CONTROLLER_H_H_INCLUDED
#include"Repository_H.h"
class Controller
{
    public:
        Repository repoo;
        Controller(Repository &repo);

        void add(Medikament &med);
        void deletee(Medikament med);

};

#endif // CONTROLLER_H_H_INCLUDED
