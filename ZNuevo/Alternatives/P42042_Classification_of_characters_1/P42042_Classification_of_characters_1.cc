/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jan 31 2023
 * @brief Programa que lea una letra, y que diga si es mayúscula o minúscula,
 * y que también diga si es una vocal o una consonante. Aquí, suponga que las
 * vocales son ' a ', ' e ', ​​' i ', ' o ' y ' u ', y sus correspondientes
 * letras mayúsculas.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P42042_en
 */

#include <iostream>
#include <string>

bool EsConsonante(const char);
bool EsMayuscula(const char);

int main() {
  char letra;
  std::cin >> letra;
  if (EsMayuscula(letra) == false) {
    std::cout << "lowercase" << std::endl;
  } else {
    std::cout << "uppercase" << std::endl;
  }
  if (EsConsonante(letra) == false) {
    std::cout << "vowel" << std::endl;
  } else {
    std::cout << "consonant" << std::endl;
  }
  return 0;
}

bool EsConsonante(const char letra) {
  std::string vocales{"AEIOUaeiou"};
  for (const auto vocal : vocales) {
    if (vocal == letra) {
      return false;
    }
  }
  return true;
}

bool EsMayuscula(const char letra) {
  if (letra >= 'a' && letra <= 'z') {
    return false;
  }
  return true;
}