//
// Created by lucas on 06/07/2025.
//

#ifndef SALA_H
#define SALA_H

#include <string>
#include <iostream>
using std::string;

class Sala
{
private:
    string tipo;
    int capacidade;
    bool disponivel;
    string responsavel{""};

public:
    Sala(const string &tipo, const int &capacidade, const bool &disponivel); // Construtor

    virtual bool reservar(const int &num_pessoas, const string &responsavel) = 0; // Metodo puramente virtual para garantir o polimorfismo entre as classes filhas.

    // Getters:
    string getTipo() const;
    int getCapacidade() const;
    bool getDisponivel() const;
    string getResponsavel() const;

    // Setters:
    void setTipo(const string &t);
    void setCapacidade(const int &c);
    void setDisponivel(const bool &d);
    void setResponsavel(const string &r);
};


#endif
