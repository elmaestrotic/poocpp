//
// Created by Alexander on 22/08/2022.
//
#ifndef POOC___AUTOMOVIL_H
#define POOC___AUTOMOVIL_H
#include <string>
using namespace std;

class AutoMovil {
public://méto2
    void arrancar();
    void acelerar();
    void frenar();

private://atributos
    string marca;
    int modelo;
    int caballosMotor;
};
#endif //POOC___AUTOMOVIL_H
