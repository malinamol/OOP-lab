#include"Controller_H.h"
#include"Repository_H.h"
#include"Domain_H.h"
#include<iostream>
using namespace std;
Controller::Controller(Repository& repo): repoo(repo){
}
/*
void Controller::deletee(Medikament med)
{
    this->repoo.deletee();
}
*/
void Controller::add(Medikament &med)
{

    this->repoo.add(med);

}

/*
Medikament& Controller::return_object(string name, int con)
{
    vector<Medikament> lista;
    lista=this->repoo.get_list();
    for(auto it=lista.begin(); it!=lista.end(); it++)
        if((*it).get_name()==name&&(*it).get_con()==con)
            return *it;
}

bool Controller::exists_med(string name, int con)
{
    vector<Medikament> lista;
    lista=this->repoo.get_list();
    for(auto it=lista.begin(); it!=lista.end(); it++)
        if((*it).get_name()==name&&(*it).get_con()==con)
            return true;
    return false;
}
*/
