#include "element.h"
#include <algorithm>

bool Element::empty()
{
    // Ein Knoten ist leer, wenn eines oder beide Kinder nullptr sind.
    return left == nullptr || right == nullptr;
}

void Element::insert(int key, bool value)
{
    // this->key und this-> value können bedingungslos gesetzt werden,
    this->key = key;
    this->value = value;

    // Falls eines der Kinder bisher nullptr war, wird es jetzt initialisiert.
    // Dadurch wird garantiert, dass ein Knoten nicht leer ist,
    // nachdem er mit einem Schlüssel und Wert initialisiert wurde.
    if (left == nullptr) {
        left = new Element();
    }
    if (right == nullptr) {
        right = new Element();
    }
}

void Element::add(int key, bool value)
{
    // Wenn der Knoten leer ist, wird er mit dem Schlüssel und Wert initialisiert.
    if (empty()) {
        insert(key, value);
        return;
    }

    // Wenn der Schlüssel in this gefunden wurde, wird der Wert überschrieben.
    if (key == this->key) {
        this->value = value;
        return;
    }

    // Wenn der einzufügende Schlüssel kleiner als this->key ist, gehe nach links.
    if (key < this->key) {
        left->add(key, value);
        return;
    }

    // Wenn der einzufügende Schlüssel größer als this->key ist, gehe nach rechts.
    // Anmerkung: Diese Möglichkeit muss an dieser Stelle immer gegeben sein,
    // da die Bedingungen oben schon alle anderen Fälle abdecken.
    right->add(key, value);
}

bool Element::get(int key)
{
    // Wenn der Knoten leer ist, gibt es keinen Wert.
    if (empty()) {
        return false;
    }

    // Wenn der Schlüssel in this gefunden wurde, wird der Wert zurückgegeben.
    if (key == this->key) {
        return value;
    }

    // Wenn der gesuchte Schlüssel kleiner als this->key ist, gehe nach links.
    if (key < this->key) {
        return left->get(key);
    }

    // Wenn der gesuchte Schlüssel größer als this->key ist, gehe nach rechts.
    return right->get(key);
}

int Element::height()
{
    // Ein leerer Baum hat die Höhe 0.
    if (empty()) {
        return 0;
    }

    // Berechne die Höhe der linken und rechten Teilbäume.
    int leftHeight = left->height();
    int rightHeight = right->height();

    // Die Höhe des Baumes ist 1 plus die maximale Höhe der beiden Teilbäume.
    // Das Maximum kann mit `std::max` berechnet werden.
    return 1 + std::max(leftHeight, rightHeight);
}
