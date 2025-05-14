#ifndef ELEMENT_H
#define ELEMENT_H

/// Ein Element eines binären Suchbaums, der als Map `int` -> `bool` fungiert.
struct Element {
    // Der Suchschlüssel. Hiernach werden die Elemente des Baumes sortiert.
    int key;
    // Der Wert, der dem Schlüssel zugeordnet ist.
    bool value;

    // Das linke Kind dieses Knotens.
    Element* left;
    // Das rechte Kind dieses Knotens.
    Element* right;

    /// Konstruktor, erzeugt einen neuen leeren Baum.
    Element() = default;

    /// Prüft, ob der Knoten leer ist.
    /// Ein Knoten ist leer, wenn eines oder beide Kinder `nullptr` sind.
    bool empty();

    /// Fügt den gegebenen Schlüssel und Wert an dieser Stelle in den Knoten ein.
    /// Wenn der Knoten bisher leer war, werden neue Kinder erzeugt.
    /// Wenn der Knoten nicht leer war, wird der Inhalt des Knotens überschrieben.
    void insert(int key, bool value);

    /// Fügt für den gegebenen Schlüssel und Wert einen Knoten in den Baum ein.
    /// Wenn der Schlüssel schon existiert, wird der Wert überschrieben.
    /// Wenn der Schlüssel nicht existiert, wird ein neuer Knoten erzeugt.
    /// Der neue Knoten wird an der Stelle eingefügt, an der er in den Baum gehört
    /// (also entsprechend der Suchbaum-Logik).
    void add(int key, bool value);

    /// Gibt den Wert für den gegebenen Schlüssel zurück.
    /// Wenn der Schlüssel nicht existiert, wird `false` zurückgegeben.
    bool get(int key);

    /// Liefert die Höhe des Baumes zurück.
    /// Ein leerer Baum hat die Höhe 0.
    int height();
};

#endif
