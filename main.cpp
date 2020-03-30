#include <iostream>
#include<string>
#include<stdlib.h>
#include"Domain_H.h"
#include"Repository_H.h"
#include"Controller_H.h"
#include"UI_H.h"
#include<vector>
using namespace std;

int main()
{
    vector<Medikament> lista;
    Medikament m1("Nurofen", 45, 100, 10);

    Repository repo;
    Controller control(repo);
    UI ui(control);
    ui.meniu();

    return 0;
}
