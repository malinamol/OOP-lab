#include"UI_H.h"
#include"Domain_H.h"
#include<iostream>
using namespace std;

 UI::UI(Controller &con):controller(con){};

 void UI::meniu()
 {
     int n; //nr optiunii
     string name;
     int con, price, quantity;
     cout<<"0.Exit\n1.Add\n2.Delete\nn: "; cin>>n;
     while( n!=0 )
     {
         if(n==1)
         {
             vector<Medikament> lista;
             cout<<"Name: "; cin>>name;
             cout<<"Concentration: "; cin>>con;
             cout<<"Quantity: "; cin>>quantity;
             cout<<"Price: "; cin>>price;
             Medikament m(name,con,quantity,price);
             this->controller.add(m);
            cout<<endl;
            lista=controller.repoo.get_list();
            for(auto it=lista.begin(); it!=lista.end(); it++)
                cout<<(*it).get_name()<<" "<<(*it).get_quantity()<<"\n";
            cout<<"New Option: ";cin>>n;


         }
         else
         {
             if(n==2)      ///delete
             {
                vector<Medikament> lista;
                string name;
                 int con;
                lista=controller.repoo.get_list();
                cout<<"Name: ";cin>>name;
                cout<<"Concentration";cin>>con;
                cout<<"New n: ";cin>>n;
                for(auto it=lista.begin(); it!=lista.end(); it++)
                    cout<<(*it).get_name()<<" "<<(*it).get_quantity()<<"\n";
             }
         }
     }
 }
