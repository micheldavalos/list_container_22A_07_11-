#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <string>
using namespace std;

class Jugador
{
private:
    string nombre;
    size_t numeroPlayera;
    size_t golesAnotados;
public:
    Jugador() = default;
    Jugador(const string& nombre,
            size_t numeroPlayera,
            size_t golesAnotados) {
                Jugador::nombre = nombre;
                Jugador::numeroPlayera = numeroPlayera;
                Jugador::golesAnotados = golesAnotados;
            }
    // Getters and Setters
    void setNombre(const string& value) { nombre = value; }
    string getNombre() const { return nombre; }

    void setNumeroPlayera(size_t value) { numeroPlayera = value; }
    size_t getNumeroPlayera() const { return numeroPlayera; }

    void setGolesAnotados(size_t value) { golesAnotados = value; }
    size_t getGolesAnotados() const { return golesAnotados; }

    friend ostream& operator<<(ostream& out, const Jugador& j) {
        out << j.nombre << " " 
        << j.numeroPlayera << " " 
        << j.golesAnotados << endl;

        return out;
    }

    friend bool operator==(const Jugador& j1, const Jugador& j2) {
        return j1.getNombre() == j2.getNombre();
    }

    friend bool operator<(const Jugador& j1, const Jugador& j2) {
        return j1.getNumeroPlayera() < j2.getNumeroPlayera();
    }
};

#endif