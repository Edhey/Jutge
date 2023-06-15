#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
// #include <algorithm>

/**
 * @brief Función que cuenta las lineas, las palabras y los caracteres del
 * fichero que se le pasa como parámetro.
 * @param nombre_fichero Es el nombre del fichero a leer.
 */
void CuentaLineasPalabrasYCaracteres(std::string nombre_fichero) {
  std::string linea{}, palabra{};
  int contador_palabras{}, contador_lineas{}, contador_caracteres{};
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return;
  }
  while (std::getline(texto_de_entrada, linea)) {
    bool espacios{true};
    // Función lambda para std::all_of
    // if (!linea.empty() && !std::all_of(linea.begin(), linea.end(),
    // [](unsigned char c){ return std::isspace(c); })) {
    if (!linea.empty()) {
      ++contador_lineas;
    }
    for (auto &caracter : linea) {
      if (!isspace(caracter))
        espacios = false;
      ++contador_caracteres;
    }
    if (espacios == true)
      --contador_lineas;
    std::istringstream iss(linea);
    while (iss >> palabra) {
      ++contador_palabras;
    }
  }
  std::cout << "Lineas: " << contador_lineas << std::endl;
  std::cout << "Palabras: " << contador_palabras << std::endl;
  std::cout << "Caracteres: " << contador_caracteres << std::endl;
}

int main() {
  std::string fichero{};
  std::cin >> fichero;
  CuentaLineasPalabrasYCaracteres(fichero);
  return 0;
}