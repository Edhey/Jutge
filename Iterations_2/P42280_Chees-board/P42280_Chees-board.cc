/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Dec 4 2022
  * @brief programa que considera un tablero de ajedrez con r filas y 
  * c columnas, donde cada cuadrado contiene entre 0 y 9 monedas y calcula
  * el número total de monedas que hay en él.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P42280_en
  */

#include <iostream>
#include <cmath>

int main() {
  int filas{0}, columnas{0}, total_monedas{0};
  std::cin >> filas >> columnas;
  int valor_columnas = columnas;
  for(int i{0}; i < filas; ++i) {
    columnas = valor_columnas;
    long long  monedas{0};
    long long componente{0};
    std::cout << std::endl << "Ingrese un numero: ";
    std::cin >> monedas;
    if (valor_columnas == 1) {
      total_monedas += monedas;
    }
    for(int i{1}; i < columnas; --columnas) {
      componente = monedas / pow(10, columnas - 1);
      std::cout << "componente: " << componente << " - ";
      monedas -= componente * pow(10, columnas - 1);
      total_monedas += componente;
      std::cout << "monedas: " << monedas << " . ";
      if(monedas < 10 && componente != 0) {
      total_monedas += monedas;
      }
      std::cout << "total:" << total_monedas << " / " << std::endl;
    }
  }
  std::cout << total_monedas << std::endl;
}