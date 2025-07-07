//
// Created by lucas on 06/07/2025.
//

#include "Auditorio.h"
#include "Sala.h"
#include <iostream>

using namespace std;

Auditorio::Auditorio(
    const string &tipo,
    const int &capacidade,
    const bool &disponivel,
    const bool &possuiSistemaSom
    ) : Sala(tipo, capacidade, disponivel)
{
    this->possuiSistemaSom = possuiSistemaSom;
};

bool Auditorio::getPossuiSistemaSom() { return possuiSistemaSom; }

void Auditorio::setPossuiSistemaSom(const bool &som) { possuiSistemaSom = som; }

bool Auditorio::reservar(const int &num_pessoas, const string &responsavel){
    if(getDisponivel() && num_pessoas <= getCapacidade()){
        setResponsavel(responsavel);
        setDisponivel(false);

        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "True" << " " << num_pessoas << " estavaLivre" << endl;

        if(!getPossuiSistemaSom()){
            cout << " não possui sistema som" << endl;
        }else{
            cout << endl;
        }
        return true;
    }else{
        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "False" << " " << num_pessoas << " estavaOcupado" << endl;
        return false;
    }
}
