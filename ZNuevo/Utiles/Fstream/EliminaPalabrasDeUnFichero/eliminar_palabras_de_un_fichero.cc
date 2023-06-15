#include <fstream>
#include <iostream>
#include <string>

/**
 * @brief Función que dado un fichero y una string borra todas las ocurrencias
 * de dicha string del fichero.
 * @param nombre_fichero Fichero a analizar.
 * @param ocurrencia_a_borrar Es el string que se quiere borrar.
 */
void BorrarOcurreciaDeFichero(std::string nombre_fichero,
                              std::string ocurrencia_a_borrar) {
  std::string linea{};
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return;
  }
  std::ofstream fichero_de_salida{"output.txt"};
  if (!fichero_de_salida) {
    std::cerr
        << "Oh no, ocurrió un error en output.txt ¡No se pudo abrir el archivo!"
        << std::endl;
    return;
  }
  while (std::getline(texto_de_entrada, linea)) {
    int posicion = linea.find(ocurrencia_a_borrar);
    while (posicion != std::string::npos) {
      linea.erase(posicion, ocurrencia_a_borrar.length());
      posicion = linea.find(ocurrencia_a_borrar);
    }
    fichero_de_salida << linea << std::endl;
  }
  fichero_de_salida.close();
  const char *c_nombre_fichero = nombre_fichero.c_str();
  std::rename("output.txt", c_nombre_fichero);
}

int main() {
  std::string nombre_fichero{}, linea{};
  std::cin >> nombre_fichero;
  std::ifstream texto_de_entrada{nombre_fichero};
  if (!texto_de_entrada) {
    std::cerr << "Oh no, ocurrió un error en " << nombre_fichero
              << " ¡No se pudo abrir el archivo!" << std::endl;
    return 0;
  }
  std::ofstream fichero_de_salida{"output.txt"};
  if (!fichero_de_salida) {
    std::cerr
        << "Oh no, ocurrió un error en output.txt ¡No se pudo abrir el archivo!"
        << std::endl;
    return 0;
  }
  while (std::getline(texto_de_entrada, linea)) {
    std::string palabra_a_borrar = "un";
    int posicion = linea.find(palabra_a_borrar);
    while (posicion != std::string::npos) {
      linea.erase(posicion, palabra_a_borrar.length());
      posicion = linea.find(palabra_a_borrar);
    }
    fichero_de_salida << linea << std::endl;
  }
  fichero_de_salida.close();
  const char* c_nombre_fichero = nombre_fichero.c_str();
  std::rename("output.txt", c_nombre_fichero);
}