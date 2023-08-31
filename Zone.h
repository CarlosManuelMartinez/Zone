//Fichero de cabecera debe ser .h---------------------

/*
  Zone.h - Library for create air zones.
  Created by Carlos M Martinez Pomares, August 28, 2023.
  Released into the public domain.
*/

//Included guard
#ifndef Zone_h
#define Zone_h
#include <Arduino.h>
#include <DHT.h>


class Zone
{
  public:
    Zone(String name, int pinOpen, int pinClosed, float temperatureTarget);
    void setTemperature(float temperatureTarget);
    float getTemperature();
    void setStateDamp(bool state);
    bool getStateDamp();
    void setName(String name);
    int getPinOpen();
    int getPinClosed();
    String getName();
    
  private:
    String _name;
    int _pinOpen;
    int _pinClosed;
    float _temperatureTarget;
    bool _state;
};

#endif
