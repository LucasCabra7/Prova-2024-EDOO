//
// Created by lucas on 06/07/2025.
//
#include "Sala.h"
#include "SalaAula.h"
#include "SalaReuniao.h"
#include "Auditorio.h"
#include <iostream>
#include <vector>       // Para std::vector
#include <memory>       // Para std::unique_ptr
#include <limits>       // Para std::numeric_limits
#include <string>       // Para std::string e std::getline

using namespace std;

int main(){
    vector<unique_ptr<Sala>> salas;

    int num_salas;
    cout << "Digite o numero de salas a cadastrar: ";
    cin >> num_salas;

    string tipo_sala;
    int capacidade_sala;
    bool disponibilidade_sala;
    bool atributo_sala;

    for(int i = 0; i < num_salas; i++){
        cout << "\n--- Cadastro da Sala " << i + 1 << " ---" << endl;
        cout << "Tipo (SalaAula, SalaReuniao, Auditorio): ";
        cin >> tipo_sala;
        cout << "Capacidade: ";
        cin >> capacidade_sala;
        cout << "Disponivel (1 p/Sim, 0 p/Nao): ";
        cin >> disponibilidade_sala;
        cout << "Atributo (1 p/Sim, 0 p/Nao): ";
        cin >> atributo_sala;

        if(tipo_sala == "SalaAula"){
            salas.push_back(make_unique<SalaAula>(tipo_sala, capacidade_sala, disponibilidade_sala, atributo_sala));
        }else if(tipo_sala == "SalaReuniao"){
            salas.push_back(make_unique<SalaReuniao>(tipo_sala, capacidade_sala, disponibilidade_sala, atributo_sala));
        }else if(tipo_sala == "Auditorio"){
            salas.push_back(make_unique<Auditorio>(tipo_sala, capacidade_sala, disponibilidade_sala, atributo_sala));
        }else{
            cout << "Tipo de sala invalido! Esta sala nao sera adicionada." << endl;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int num_reservas;
    cout << "\nDigite o numero de reservas a realizar: ";
    cin >> num_reservas;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string tipo_reserva;
    string responsavel;
    int num_pessoas;

    for(int i =0; i<num_reservas; i++){
        cout << "\n--- Reserva " << i + 1 << " ---" << endl;
        cout << "Tipo da Sala para reserva (ex: SalaAula, SalaReuniao, Auditorio): ";
        cin >> tipo_reserva;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Responsavel pela reserva: ";
        getline(cin, responsavel);

        cout << "Numero de pessoas: ";
        cin >> num_pessoas;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        bool sala_encontrada_para_tentar_reserva = false;

        for(const auto& sala_ptr : salas){
            if(sala_ptr->getTipo() == tipo_reserva){
                sala_ptr->reservar(num_pessoas, responsavel);
                sala_encontrada_para_tentar_reserva = true;
                break;
            }
        }
        if(!sala_encontrada_para_tentar_reserva){
            cout << tipo_reserva << " " << responsavel << " " << num_pessoas << " false " << "tipo_sala_nao_encontrado" << endl;
        }
    }
    return 0;
}