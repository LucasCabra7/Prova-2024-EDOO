//
// Created by lucas on 06/07/2025.
//

#include "SalaAula.h"
#include "Sala.h"
#include <iostream>

using namespace std;

SalaAula::SalaAula(
    const string &tipo,
    const int &capacidade,
    const bool &disponivel,
    const bool &possuiQuadroInterativo)
    : Sala(tipo, capacidade, disponivel)
{
    this->possuiQuadroInterativo = possuiQuadroInterativo;
};

bool SalaAula::getPossuiQuadroInterativo() { return possuiQuadroInterativo; }

void SalaAula::setPossuiQuadroInterativo(const bool &q) { possuiQuadroInterativo = q; }

bool SalaAula::reservar(const int &num_pessoas, const string &responsavel){
    if(getDisponivel() && getCapacidade() >= 30 && num_pessoas <= getCapacidade()){
        setResponsavel(responsavel);
        setDisponivel(false);

        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "True" << " " << num_pessoas << " estavaLivre" << endl;

        if(!getPossuiQuadroInterativo()){
            cout << " Não possui quadro interativo" << endl;
        }else {
            cout << endl;
        }
        return true;
    }else{
        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "False" << " " << num_pessoas << " estavaOcupado" << endl;
        return false;
    }
}
