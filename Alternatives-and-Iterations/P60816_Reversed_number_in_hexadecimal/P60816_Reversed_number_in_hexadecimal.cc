/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que lee un número e imprime su representación hexadecimal al
  * revés. Siga la convención para usar las letras de ' A ' a ' F ' para 
  * representar los valores de 10 a 15.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P60816_en
  */  

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que lee un número e imprime su representación"
  << " hexadecimal al revés." << std::endl;
  std::cout << "Escribe un número: " << std::endl;
}

/** @brief Función que lee un número pasado como parámetro e imprime su 
  * representación binaria al revés.
  * @param numero Numero del cuál se imprimirá su representación binaria al revés.
  * @return Vector de enteros donde cada componente es uno de los 0 o 1 que 
  */
void NumeroEnHexadecimalAlReves(int numero) {
  const int kNumero16{16}, kNumero10{10};
  char resto_ascii_char;
  int resto{};
  while (numero / kNumero16 != 0) {
    if (numero % kNumero16 >= kNumero10) {
      resto = (numero % kNumero16) - kNumero10;
      resto_ascii_char = static_cast<char>(resto + 'A');
      std::cout << resto_ascii_char;
      numero /= kNumero16;
    } else {
      std::cout << numero % 16;
      numero /= kNumero16;
    }
  }
  if (numero % kNumero16 >= kNumero10) {
    resto = (numero % kNumero16) - kNumero10;
    resto_ascii_char = static_cast<char>(resto + 'A');
    std::cout << resto_ascii_char << std::endl;
  } else {
    std::cout << numero << std::endl;
  }
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  NumeroEnHexadecimalAlReves(numero);
} 