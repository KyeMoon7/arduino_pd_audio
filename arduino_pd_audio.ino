// Le code minimal
#include <Arduino.h>

#include <Bounce2.h>

#define BROCHE_BOUTON 2

Bounce2::Button bouton = Bounce2::Button();

void setup()
{
    bouton.attach(BROCHE_BOUTON, INPUT_PULLUP);
    bouton.setPressedState(LOW);
}

void loop()
{
    bouton.update();

    // La DEL suit l'état physique du bouton
    if (bouton.pressed())
    {
        Serial.println(123);
    }
}