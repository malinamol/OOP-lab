#ifndef DOMAIN_H_H_INCLUDED
#define DOMAIN_H_H_INCLUDED
#include<string>
using namespace std;
class Medikament
{
    private:
        string name;
        int con;
        int quantity;
        int price;

    public:
        Medikament(string name, int con, int quantity, int price);
        string get_name();
        int get_con();
        int get_quantity();
        int get_price();
        void set_name(string new_name);
        void set_con(int new_con);
        void set_quantity(int new_quantity);
        void set_price(int new_price);
};


#endif // DOMAIN_H_H_INCLUDED
