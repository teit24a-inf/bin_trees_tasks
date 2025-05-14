#include "element.h"
#include <algorithm>

bool Element::empty()
{
    // Ein Knoten ist leer, wenn eines oder beide Kinder nullptr sind.
    // TODO
}

void Element::insert(int key, bool value)
{
    // this->key und this-> value können bedingungslos gesetzt werden,
    // TODO

    // Falls eines der Kinder bisher nullptr war, wird es jetzt initialisiert.
    // Dadurch wird garantiert, dass ein Knoten nicht leer ist,
    // nachdem er mit einem Schlüssel und Wert initialisiert wurde.
    // TODO
}

void Element::add(int key, bool value)
{
    // Wenn der Knoten leer ist, wird er mit dem Schlüssel und Wert initialisiert.
    // TODO

    // Wenn der Schlüssel in this gefunden wurde, wird der Wert überschrieben.
    // TODO

    // Wenn der einzufügende Schlüssel kleiner als this->key ist, gehe nach links.
    // TODO

    // Wenn der einzufügende Schlüssel größer als this->key ist, gehe nach rechts.
    // Anmerkung: Diese Möglichkeit muss an dieser Stelle immer gegeben sein,
    // da die Bedingungen oben schon alle anderen Fälle abdecken.
    // TODO
}

bool Element::get(int key)
{
    // Wenn der Knoten leer ist, gibt es keinen Wert.
    // TODO

    // Wenn der Schlüssel in this gefunden wurde, wird der Wert zurückgegeben.
    // TODO

    // Wenn der gesuchte Schlüssel kleiner als this->key ist, gehe nach links.
    // TODO

    // Wenn der gesuchte Schlüssel größer als this->key ist, gehe nach rechts.
    // TODO

    return false;
}

int Element::height()
{
    // Ein leerer Baum hat die Höhe 0.
    // TODO

    // Berechne die Höhe der linken und rechten Teilbäume.
    // TODO

    // Die Höhe des Baumes ist 1 plus die maximale Höhe der beiden Teilbäume.
    // Das Maximum kann mit `std::max` berechnet werden.
    // TODO

    return 0;
}
