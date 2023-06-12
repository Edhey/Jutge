/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que cifre los mensajes con el “Cifrado César”, utilizado por
 * Julio César para comunicarse con sus generales. Dada una k constante, cada
 * letra del mensaje original se reemplaza por la letra que se encuentra
 * alfabéticamente en k posiciones a su derecha (circularmente, si es
 * necesario). Por ejemplo, si k = 5, debemos cambiar 'a' por 'f', 'b' por 'g',
 * …, 'y' por 'd', y 'z' por 'e'.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P33371_en
 */

#include <iostream>
#include <string>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que cifre los mensajes con el “Cifrado César”, utilizado "
         "por Julio César para comunicarse con sus generales. Dada una k "
         "constante, cada letra del mensaje original se reemplaza por la letra "
         "que se encuentra alfabéticamente en k posiciones a su derecha "
         "(circularmente, si es necesario). Por ejemplo, si k = 5, debemos "
         "cambiar 'a' por 'f', 'b' por 'g', …, 'y' por 'd', y 'z' por 'e'."
      << std::endl;
  std::cout << "La entrada consta de varios casos. Cada caso comienza con un "
               "número natural k > 0, seguido de un texto compuesto únicamente "
               "por letras minúsculas y caracteres separadores, pero sin "
               "espacios, y terminado con un punto."
            << std::endl;
}

/**
 * @brief Función que devuelve el carácter correspondiente siguiendo el cifrado
 * César, sumando el desplazamiento pasado como parámetro en el alfabeto al
 * carácter pasado.
 * @param caracter caracter a cifrar.
 * @param desplazamiento Es la cantidad de letras que se mueve caracter en el
 * abecedario.
 * @return devuelve el carácter correspondiente a c cuando la constante es k.
 */
char Encoded(char caracter, int desplazamiento) {
  int des;
  if (caracter == '_')
    return ' ';
  else if (isalpha(caracter)) {
    return ((caracter - 'a' + desplazamiento) % ('z' - 'a' + 1) + 'A');
  } else
    return caracter;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int desplazamiento{};
  std::string texto{};
  while (std::cin >> desplazamiento) {
    // std::getline(std::cin, texto);
    std::cin >> texto;
    int i{0};
    while (texto[i] != '.') {
      std::cout << Encoded(texto[i], desplazamiento);
      ++i;
    }
    std::cout << std::endl;
  }
  return 0;
}