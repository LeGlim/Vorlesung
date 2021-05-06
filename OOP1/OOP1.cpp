// OOP1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Auto.h"
#include "Ort.h"

int main()
{
    Ort *ort1 = new Ort(12, 8, "Sportplatz");
    Ort *ort2 = new Ort(8, 10, "Koksplatz");

    Auto *benza = new Auto("C-Klasse", ort1, 5);
    benza->drive(ort2);

    std::cout << benza->getStrecke();
}
