#include"Repository_H.h"
#include<iostream>
using namespace std;
void Repository::add(Medikament med)  //aici fac cautarile
{

    if(!this->exists_med(med.get_name(), med.get_con())) //inseamna ca nu exista medicamentul
        this->list_med.push_back(med);

    else  //daca exista deja
        {
            for(auto it=this->list_med.begin(); it!=this->list_med.end(); it++)
                if((*it).get_name()==med.get_name()&&(*it).get_con()==med.get_con())
                    this->update( *it, med.get_name(), med.get_con(), med.get_quantity(), med.get_price());

        }
}
void Repository::update(Medikament &med, string new_name, int new_con, int new_quantity, int new_price){

    med.set_name(new_name);
    med.set_con(new_con);
    med.set_quantity(new_quantity);
    med.set_price(new_price);

}

void Repository::deletee(int poz)
{
    this->list_med.erase(list_med.begin()+poz);
}

vector<Medikament> Repository::get_list(){

    return this->list_med;
}

Medikament Repository::return_object(string name, int con)
{
    for(auto it=this->list_med.begin(); it!=this->list_med.end(); it++)
        if((*it).get_name()==name&&(*it).get_con()==con)
            return *it;
}

bool Repository::exists_med(string name, int con)
{
    for(auto it=this->list_med.begin(); it!=this->list_med.end(); it++)
        if((*it).get_name()==name&&(*it).get_con()==con)
            return true;
    return false;
}
