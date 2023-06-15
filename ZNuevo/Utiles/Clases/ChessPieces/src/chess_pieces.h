/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Declaración de los métodos de la clase ChessPieces
 * @bug No hay errores conocidos
 * @see
 */

#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <iostream>
#include <vector>

enum class Color { blanco, negro };

enum class Piezas {
  peon,
  alfil,
  caballo,
  torre,
  reina,
  rey,
};

class ChessPieces {
public:
  ChessPieces(const Piezas& pieza, const Color& color, int fila, int columna)
      : pieza_(pieza), color_(color), fila_(fila), columna_(columna) {}
  ~ChessPieces();
  ChessPieces(const ChessPieces&);
  friend std::ostream& operator<<(std::ostream& out, const ChessPieces& pieza);
  int getFila() const { return fila_; }
  int getColumna() const { return columna_; }

private:
  Piezas pieza_;
  Color color_;
  int fila_;
  int columna_;
};

std::string PiezaAString(const Piezas& pieza);
std::string ColorAString(const Color& color);

#endif
