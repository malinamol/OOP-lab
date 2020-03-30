#ifndef REPOSITORY_H_H_INCLUDED
#define REPOSITORY_H_H_INCLUDED
#include"Domain_H.h"
#include<vector>
class Repository
{
    //private:
      //  vector<Medikament> list_med;
    public:
        //CRUD -create,read,update,delete
        vector<Medikament> list_med;
        void add(Medikament m);
        void update(Medikament &m, string new_name, int new_con, int new_quantity, int new_price);
        void deletee(int poz);
        vector<Medikament> get_list();
        Medikament return_object(string name, int con);
        bool exists_med(string name, int con);

};


#endif // REPOSITORY_H_H_INCLUDED
