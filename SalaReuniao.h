//
// Created by lucas on 06/07/2025.
//

#ifndef SALAREUNIAO_H
#define SALAREUNIAO_H

#include "Sala.h"
#include <string>
#include <iostream>

using std::string;

class SalaReuniao : public Sala
{
private:
    bool possuiVideoConferencia;

public:
    SalaReuniao(const string &tipo, const int &capacidade, const bool &disponivel, const bool &possuiVideoConferencia);

    bool reservar(const int &num_pessoas, const string &responsavel);

    // Getters:
    bool getPossuiVideoConferencia();

    // Setters:
    void setPossuiVideoConferencia(const bool &v);

};


#endif