/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase ChessPieces
 * @see
 */

#include <string>

#include "chess_pieces.h"

bool CompruebaParametrosCorrectos(const int argc, char* argv[],
                                  const int kCorrectNumber);

std::vector<ChessPieces> InstanciaPiezas(int piezas_a_instanciar);

void ImprimeVectorPiezas(const std::vector<ChessPieces>& vector_de_piezas);

bool PosicionesCorrectas(const std::vector<ChessPieces>& vector_de_piezas);

/**
 * @brief Función main
 */
int main(int argc, char* argv[]) {
  int numero_de_parametros{1};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  std::cout << "Prueba del constructor de copia: " << std::endl;
  ChessPieces pieza1(Piezas::alfil, Color::blanco, 2, 3);
  std::cout << "Pieza original: " << pieza1 << std::endl;
  ChessPieces pieza_copia(pieza1);
  std::cout << "Pieza copia: " << pieza_copia << std::endl;
  std::vector<ChessPieces> vector_de_piezas;
  vector_de_piezas = InstanciaPiezas(std::stoi(argv[1]));
  ImprimeVectorPiezas(vector_de_piezas);
  int numero_de_iteraciones{1};
  while (!PosicionesCorrectas(vector_de_piezas)) {
    std::cout << "Hay piezas en posicones iguales. Se procede a reordenar: "
              << std::endl;
    vector_de_piezas = InstanciaPiezas(std::stoi(argv[1]));
    ImprimeVectorPiezas(vector_de_piezas);
    ++numero_de_iteraciones;
  }
  std::cout << "El número de iteraciones totales fue " << numero_de_iteraciones
            << std::endl;
}