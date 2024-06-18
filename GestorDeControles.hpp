#ifndef __GESTOR_DE_CONTROLES_HPP__
#define __GESTOR_DE_CONTROLES_HPP__

#include <SFML/Graphics.hpp>
#include "ContenedorDeRecursos.hpp"
#include "Enums.hpp"
#include <map>
#include <vector>

/*
    Clase que se encarga de la correspondencia entre jugadores y controles,
    adem�s de indicar qu� significan las teclas y botones que se pulsan
*/
class GestorDeControles
{
    protected:
        GestorDeControles();
        static GestorDeControles * gestorDeControles;

    private:

        // Mapa que guarda, para cada control, el jugador al que est� asignado
        std::map<Control, Jugador> controlAJugador;

        // Mapa que guarda, para cada tecla v�lida (excepto la tecla de salir), la parte del teclado y la acci�n asociada
        std::map<sf::Keyboard::Key,std::pair<Control,Accion>> teclaAControlYAccion;

        // Funci�n que indica si un control est� libre
        bool estaLibre(Control c);

    public:

        // Dado un evento, devuelve el jugador y la acci�n que est� haciendo
        std::pair<Jugador,Accion> comprobarEvento(sf::Event evento);

        // Asigna un control a un jugador
        bool asignarControl(Jugador jugador, Control control);

        // NUNCA SE COPIA UN SINGLETON
        GestorDeControles(GestorDeControles &otro) = delete;

        // NUNCA SE ASIGNA UN SINGLETON
        void operator=(const GestorDeControles &) = delete;

        // Devuelve la �nica instancia
        static GestorDeControles * unicaInstancia();
};

#endif // __GESTOR_DE_CONTROLES_HPP__
