//Fichero fuente debe ser.cpp---------------------
/*
  Zone.cpp - Library for create air zones.
  Created by Carlos M Martinez Pomares, August 28, 2023.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Zone.h"

//DHT _dht(20,DHT11);
//


//Constructor de la clase----------------------------------------------------

Zone::Zone(String name, int pinOpen, int pinClosed, float temperatureTarget)
{
  _name = name;
  _pinOpen = pinOpen;
  _pinClosed = pinClosed;
  _temperatureTarget = temperatureTarget;
  
  pinMode(_pinOpen,OUTPUT);
  pinMode(_pinClosed,OUTPUT);
  
}


//Metodos para asignar la temperatura de consigna y consultarla TEMPERATURA CONSIGNA---------------------------

void Zone::setTemperature(float temperatureTarget)
{
  if(temperatureTarget >= 16 && temperatureTarget <= 28)
  {
    _temperatureTarget = temperatureTarget;
  }
  else
  {
    _temperatureTarget = 25.5;
  }
      
}

 float Zone::getTemperature()
{   
  return _temperatureTarget;
}

//Metodos para asignar estado de compuerta y consultar ESTADO DE LA COMPUERTA---------------------------

void Zone::setStateDamp(bool state)
{
  _state = state;
}

bool Zone::getStateDamp()
{
  return _state;
}

//Metodos para asignar y consultar el nombre NOMBRE---------------------------

void Zone::setName(String name)
{
  _name = name;
}

String Zone::getName()
{   
  return _name;
}

//Metodos consultar los pines PINES---------------------------

int Zone::getPinOpen()
{
  return _pinOpen;
}

int Zone::getPinClosed()
{   
  return _pinClosed;
}




