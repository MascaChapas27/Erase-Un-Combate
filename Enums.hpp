#ifndef __ENUMS_HPP__
#define __ENUMS_HPP__

/*
    Este fichero contiene enumerados (enums)
*/

// Enumerado para acciones que se pueden llevar a cabo al pulsar teclas
enum class Accion {
    NADA, IZQUIERDA, DERECHA, ARRIBA, ABAJO, ATACAR, ESCAPE
};

// Tipo de bucle en una animaci�n
enum class TipoBucle {
    SIN_BUCLE,      // No hay bucle, cuando la animaci�n termina se deja de actualizar
    NORMAL,         // Cuando termina la animaci�n, vuelve a empezar desde el principio
    AL_REVES,       // Como el normal, pero desde el final hasta el principio
    PING_PONG       // Cuando termina la animaci�n, empieza desde el final hasta el principio y al rev�s
};

// Tipo de hitbox
enum class TipoHitbox {
    INVALIDA,       // Para animaciones sin hitbox (nubes de polvo, part�culas que saltan...)
    PERSONAJE,      // Hitbox para un personaje
    ATAQUE          // Hitbox para un ataque
};

// Tipo de ataque
enum class TipoAtaque {
    PEQUE, MEDIO, GRANDE, BAJO, AEREO
};

// Enumerado para estados en los que se puede encontrar un personaje
enum class EstadoPersonaje {
    QUIETO,             // No hace nada, solo est� quieto en el sitio
    AGACHADO,           // Est� agachado y quieto
    ATAQUE_AGACHADO,    // Est� atacando mientras est� agachado
    ATAQUE_NORMAL_1,    // Est� atacando de pie (primer ataque)
    ATAQUE_NORMAL_2,    // Est� atacando de pie (segundo ataque)
    ATAQUE_NORMAL_3,    // Est� atacando de pie (tercer ataque)
    ATAQUE_AEREO,       // Est� atacando en el aire
    GOLPEADO_PEQUE,     // Ha sufrido un ataque peque�o
    GOLPEADO_MEDIO,     // Ha sufrido un ataque medio
    GOLPEADO_GRANDE,    // Ha sufrido un ataque grande
    GOLPEADO_BAJO,      // Ha sufrido un ataque bajo
    SALTANDO,           // Est� en el aire despu�s de saltar
    ANDANDO_IZQUIERDA,  // Est� andando hacia la izquierda
    ANDANDO_DERECHA,    // Est� andando hacia la derecha
    BLOQUEANDO,         // Est� bloqueando un ataque
    PREPARANDO_SUPER,   // Est� prepar�ndose para lanzar el super ataque
    ATACANDO_SUPER,     // Est� haciendo el super ataque
    LEVANTANDOSE,       // Se est� levantando del suelo
    CELEBRANDO          // Est� celebrando su victoria
};

// Enumerado para los jugadores
enum class Jugador {
    NADIE, JUGADOR1, JUGADOR2
};

// Posibles controles que un jugador puede utilizar
enum class Control{
    TECLADO_IZQUIERDA, TECLADO_DERECHA,
    MANDO0, MANDO1, MANDO2, MANDO3,
    MANDO4, MANDO5, MANDO6, MANDO7
};

/*
    ENUMERADOS DE IDENTIFICADORES
*/

// Enumerado para los identificadores de personajes
enum class IDPersonaje {
    JUAN_CUESTA
};

// Enumerado para los identificadores de escenarios
enum class IDEscenario {

};

// Enumerado para los identificadores de texturas
enum class IDTextura {

};

// Enumerado para los identificadores de sonidos
enum class IDSonido {

};

// Enumerado para los identificadores de fuentes
enum class IDFuente {

};

// Enumerado para los identificadores de canciones
enum class IDMusica {

};

#endif // __ENUMS_HPP__
