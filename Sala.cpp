//
// Created by lucas on 06/07/2025.
//

#include "Sala.h"
#include <iostream>
using namespace std;

Sala::Sala(const string &tipo, const int &capacidade,const bool &disponivel)
{
    this->tipo = tipo;
    this->capacidade = capacidade;
    this->disponivel = disponivel;
};

// Getters:
string Sala::getTipo() const { return tipo; }
int Sala::getCapacidade() const { return capacidade; }
bool Sala::getDisponivel() const { return disponivel; }
string Sala::getResponsavel() const { return responsavel; }

// Setters:
void Sala::setTipo(const string &t){
    tipo = t;
};

void Sala::setCapacidade(const int &c){
    capacidade = c;
};

void Sala::setDisponivel(const bool &d){
    disponivel = d;
};

void Sala::setResponsavel(const string &r){
    responsavel = r;
};