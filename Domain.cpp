#include"Domain_H.h"
using namespace std;
Medikament::Medikament(string name, int con, int quantity, int price)
{
    this->name=name;
    this->con=con;
    this->quantity=quantity;
    this->price=price;
}

string Medikament::get_name(){
    return this->name;
}
int Medikament::get_con(){
    return this->con;
}
int Medikament::get_quantity(){
    return this->quantity;
}
int Medikament::get_price(){
    return this->price;
}

void Medikament::set_name(string new_name){
    this->name=new_name;
}
void Medikament::set_con(int new_con){
    this->con=new_con;
}
void Medikament::set_quantity(int new_quantity){
    this->quantity=new_quantity;
}
void Medikament::set_price(int new_price){
    this->price=new_price;
}
