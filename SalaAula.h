//
// Created by lucas on 06/07/2025.
//

#ifndef SALAAULA_H
#define SALAAULA_H

#include "Sala.h"
#include <iostream>
#include <string>
using std::string;

class SalaAula : public Sala{
private:
    bool possuiQuadroInterativo;

public:
    SalaAula(const string &tipo, const int &capacidade, const bool &disponivel, const bool &possuiQuadroInterativo);

    bool reservar(const int &num_pessoas, const string &responsavel);

    // Getters:
    bool getPossuiQuadroInterativo();

    // Setters:
    void setPossuiQuadroInterativo(const bool &q);
};



#endif
