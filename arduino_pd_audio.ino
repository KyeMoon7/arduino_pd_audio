// Le code minimal
#include <Arduino.h>

#include <Bounce2.h>

// #define BROCHE_BOUTON 2 permet d'écrire BROCHE_BOUTON à la place de 2 dans le code.

Bounce2::Button bouton = Bounce2::Button();

void setup()
{
    bouton.attach(2, INPUT_PULLUP);
    bouton.setPressedState(LOW);
}

void loop()
{
    bouton.update();

    // La DEL suit l'état physique du bouton
    if (bouton.pressed()) //le prof a demander de faire apparaitre 123 quand le bouton est appuyé (une fois) isPressed ferais en sorte que le 123 s'affiche tant que le bouton est appuyé, ce qui n'est pas le but. ne pas oublier de fermer le terminal si on utilise pdchoco
    {
        Serial.print("bouton0 ");  // Envoie le descripteur et son espace en un seul bloc, si on veux faire un espace entre le descripteur et la valeur, on peut faire Serial.print("bouton0"); Serial.print(" "); Serial.print(1); Serial.println();
        Serial.println(1); // Envoie la valeur et ajoute automatiquement le saut de ligne final
    }
}