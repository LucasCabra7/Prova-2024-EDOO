//
// Created by lucas on 06/07/2025.
//

#include "SalaReuniao.h"
#include "Sala.h"
#include <iostream>

using namespace std;

SalaReuniao::SalaReuniao(
    const string &tipo,
    const int &capacidade,
    const bool &disponivel,
    const bool &possuiVideoConferencia
    ) : Sala(tipo, capacidade, disponivel)
{
    this->possuiVideoConferencia = possuiVideoConferencia;
};

bool SalaReuniao::getPossuiVideoConferencia() { return possuiVideoConferencia; }

void SalaReuniao::setPossuiVideoConferencia(const bool &v) { possuiVideoConferencia = v; }

bool SalaReuniao::reservar(const int &num_pessoas, const string &responsavel){
    if(getDisponivel() && num_pessoas >= 10 && num_pessoas <= getCapacidade()){
        setResponsavel(responsavel);
        setDisponivel(false);

        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "True" << " " << num_pessoas << " estavaLivre" << endl;

        if(!getPossuiVideoConferencia()){
            cout << " não possui video conferencia" << endl;
        }else{
            cout << endl;
        }
        return true;
    }else{
        cout << "Resultado da Reserva: " << endl;
        cout << this->getTipo() << " " << responsavel << " " << "False" << " " << num_pessoas << " estavaOcupado" << endl;
        return false;
    };
}
