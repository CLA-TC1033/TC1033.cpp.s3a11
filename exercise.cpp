#include <iostream>
#include "Alumno.hpp"

int main()
{
    Alumno a1;
    Alumno a2("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");

    a1.imprimeAlumno();
    a2.imprimeAlumno();

    a2.cumpleAnios();
    std::cout << "Felicidades " << a2.getNombre() << " por tu cumpleaños No. " 
        << a2.getEdad() << " !\n";
}