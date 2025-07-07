//
// Created by lucas on 06/07/2025.
//

#ifndef AUDIOTIRO_H
#define AUDIOTIRO_H

#include "Sala.h"
#include <iostream>
#include <string>

using std::string;

class Auditorio : public Sala
{
private:
    bool possuiSistemaSom;

public:
    Auditorio(const string &tipo, const int &capacidade, const bool &disponivel, const bool &possuiSistemaSom);

    bool reservar(const int &num_pessoas, const string &responsavel);

    // Getters:
    bool getPossuiSistemaSom();

    // Setters:
    void setPossuiSistemaSom(const bool &som);
};



#endif
