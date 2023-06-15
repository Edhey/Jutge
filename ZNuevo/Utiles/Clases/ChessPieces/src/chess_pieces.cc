/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase ChessPieces
 * @bug No hay errores conocidos
 * @see
 */

#include "chess_pieces.h"

#include <random>
#include <cstring>
#include <ctime>

/**
 * @brief Destructor de la clase ChessPieces.
 */
ChessPieces::~ChessPieces() {}

/**
 * @brief Constructor de copia para la clase ChessPieces.
 * @param copia Es el tipo ChessPieces pasado como referencia a copiar.
 */
ChessPieces::ChessPieces(const ChessPieces& copia) {
  this->color_ = copia.color_;
  this->columna_ = copia.columna_;
  this->fila_ = copia.fila_;
  this->pieza_ = copia.pieza_;
}

/**
 * @brief Sobrecarga del operador de inserción de flujo para imprimir un objeto
 * ChessPieces en un flujo de salida.
 * @param out Flujo de salida en el que se imprimirá el objeto ChessPieces.
 * @param pieza Objeto ChessPieces que se imprimirá en el flujo de salida.
 * @return Referencia al flujo de salida.
 */
std::ostream& operator<<(std::ostream& out, const ChessPieces& pieza) {
  out << PiezaAString(pieza.pieza_) << " de color "
      << ColorAString(pieza.color_) << ", fila " << pieza.fila_ << ", columna "
      << pieza.columna_;
  return out;
}

/**
 * @brief Convierte el valor del enum a una string para su impresión.
 * @param pieza pieza a convertir.
 * @return String con el nombre correcto.
 */
std::string PiezaAString(const Piezas& pieza) {
  switch (pieza) {
  case Piezas::peon:
    return "peon";
  case Piezas::alfil:
    return "alfil";
  case Piezas::torre:
    return "torre";
  case Piezas::reina:
    return "dama";
  case Piezas::caballo:
    return "caballo";
  case Piezas::rey:
    return "rey";
  default:
    return "error";
  }
}

/**
 * @brief Convierte el valor del enum a una string para su impresión.
 * @param color color a convertir.
 * @return String con el nombre correcto.
 */
std::string ColorAString(const Color& color) {
  switch (color) {
  case Color::blanco:
    return "blanco";
  case Color::negro:
    return "negro";
  default:
    return "error";
  }
}

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Progrma que contiene la clase ChessPieces. Cuyo objetivo es "
               "almacenar las características de una pieza de ajedrez: tipo de "
               "pieza, color de pieza y posición en el tablero. Su programa "
               "principal instancia el número de piezas pasado por línea de "
               "comandos ubicandolas en zonas aleatorias hasta que ninguna "
               "pieza esté encima de otra."
            << std::endl;
  std::cout << "Introduzca el número de piezas a instanciar:" << std::endl;
}

/**
 * @brief Función que comprueba si el número de parámetros introducido es
 * correcto.
 * @param[in] argc: Número de parámetros en la línea de comando.
 * @param[in] argv: Vector contenedor (char*) de parámetros.
 * @param[in] kCorrectNumber: Número de parámetros que debería haber.
 * @return verdadero si el número de parámetros es correcto.
 *         falso si no lo es.
 */
bool CompruebaParametrosCorrectos(const int argc, char* argv[],
                                  const int kCorrectNumber) {
  if (argc == 2 && (!strcmp(argv[1], "--help"))) {
    Introduccion();
    return false;
  } else if (argc != kCorrectNumber + 1) {
    std::cerr << "Error. Número de parámetros incorrecto" << std::endl;
    std::cerr << "Este programa ha de ser llamado " << argv[0] << " Parámetro1 "
              << std::endl;
    std::cerr << "Parámetro1: "
              << "Número de piezas" << std::endl;
    std::cerr << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Función que genera un vector con n números aleatorios.
 * @param cantidad_de_numeros es la cantidad de números aleatorios del vector.
 * @return Devuelve un vector con n números aleatorios.
 */
std::vector<int> VectorEnteroAleatorio(int cantidad_de_numeros) {
  std::vector<int> vector_aleatorio(cantidad_de_numeros);
  // Semilla generadora
  for (auto& elemento : vector_aleatorio) {
    elemento = rand() % 300 + 1985;  // El número está en el rango 1985-2284
  }
  return vector_aleatorio;
}

/**
 * @brief Función que instancia un vector de n piezas.
 * @param piezas_a_instanciar Es la cantidad de piezas a instanciar.
 * @return Devuelve un vector con los n piezas.
 */
std::vector<ChessPieces> InstanciaPiezas(int piezas_a_instanciar) {
  std::vector<ChessPieces> vector_de_piezas;
  std::srand(std::time(nullptr));
  for (int i{0}; i < piezas_a_instanciar; ++i) {
    vector_de_piezas.emplace_back(Piezas(rand() % 6), Color(rand() % 2),
                                  rand() % 8, rand() % 8);
  }
  return vector_de_piezas;
}

/**
 * @brief Función que imprime un vector de piezas.
 * @param vector_de_piezas Es el vector de piezas a imprimir.
 */
void ImprimeVectorPiezas(const std::vector<ChessPieces>& vector_de_piezas) {
  for (auto& pieza : vector_de_piezas) {
    std::cout << pieza << std::endl;
  }
}

/**
 * @brief Función que comprueba si hay dos piezas en el mismo lugar. En ese caso
 * devuelve false.
 * @param vector_de_piezas Es el vector que contiene las piezas a analizar.
 * @return true: si todas las piezas están en posiciones diferentes.
 *         false: si hay piezas en posiciones iguales.
 */
bool PosicionesCorrectas(const std::vector<ChessPieces>& vector_de_piezas) {
  for (size_t i{0}; i < vector_de_piezas.size(); ++i) {
    for (size_t j{0}; j < vector_de_piezas.size(); ++j) {
      if (i != j &&
          vector_de_piezas[i].getColumna() == vector_de_piezas[j].getColumna() 
          && vector_de_piezas[i].getFila() == vector_de_piezas[j].getFila()) {
        return false;
      }
    }
  }
  return true;
}
