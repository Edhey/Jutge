/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase Cars
 * @bug No hay errores conocidos
 * @see
 */

#include "cars.h"

#include <string>
#include <limits>

/**
 * @brief Destructor de la clase Cars.
 */
Cars::~Cars() {}

std::string Cars::GetTipo() const { return this->tipo_; }

std::string Cars::GetMarca() const { return this->marca_; }

std::string Cars::GetModelo() const { return this->modelo_; }

double Cars::GetPrecio() const { return this->precio_; }

/**
 * @brief Función que instancia un vector de n coches.
 * @param coches_a_instanciar Es la cantidad de coches a instanciar.
 * @return Devuelve un vector con los n coches.
 */
std::vector<Cars> InstanciaCoches(int coches_a_instanciar) {
  std::vector<Cars> vector_de_coches;
  for (int i{0}; i < coches_a_instanciar; ++i) {
    std::string tipo{};
    std::cout << "Introduzca el tipo del coche " << i + 1 << ": " << std::endl;
    std::getline(std::cin, tipo);
    std::string marca{};
    std::cout << "Introduzca la marca del coche " << i + 1 << ": " << std::endl;
    std::getline(std::cin, marca);
    std::string modelo{};
    std::cout << "Introduzca el modelo del coche " << i + 1 << ": "
              << std::endl;
    std::getline(std::cin, modelo);
    double precio{};
    std::cout << "Introduzca el precio del coche " << i + 1 << ": "
              << std::endl;
    std::cin >> precio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector_de_coches.emplace_back(tipo, marca, modelo, precio);
  }
  return vector_de_coches;
}

/**
 * @brief Función que imprime un vector de coches.
 * @param vector_de_coches Es el vector de coches a imprimir.
 */
void ImprimeVectorCoches(const std::vector<Cars>& vector_de_coches) {
  std::vector<std::string> tipos_de_coche_{
      "Todoterreno", "Berlina",   "Coupe",   "Utilitario",
      "Monovolumen", "Deportivo", "Roadster"};
  for (auto& tipo : tipos_de_coche_) {
    double maximo_precio{-1};
    std::cout << "Coches del tipo " << tipo << std::endl;
    for (auto& coche : vector_de_coches) {
      if (tipo == coche.GetTipo()) {
        std::cout << coche;
        if (maximo_precio < coche.GetPrecio()) {
          maximo_precio = coche.GetPrecio();
        }
      }
    }
    if (maximo_precio != -1)
      std::cout << "El coche más caro vale " << std::fixed << maximo_precio
                << std::endl;
    std::cout << std::endl;
  }
}

/**
 * @brief Sobrecarga del operador de inserción de flujo para imprimir un objeto
 * Cars en un flujo de salida.
 * @param out Flujo de salida en el que se imprimirá el objeto Cars.
 * @param coche Objeto Cars que se imprimirá en el flujo de salida.
 * @return Referencia al flujo de salida.
 */
std::ostream& operator<<(std::ostream& out, const Cars& coche) {
  out << coche.marca_ << ", " << coche.modelo_ << ", " << coche.tipo_ << ", "
      << std::fixed << coche.precio_ << std::endl;
  return out;
}

/**
 * @brief Sobrecarga del operador de extracción de flujo para leer un objeto
 * Cars desde un flujo de entrada.
 * @param in Flujo de entrada desde el que se leerá el objeto Cars.
 * @param coche Objeto Cars en el que se almacenarán los valores
 * leídos desde el flujo de entrada.
 * @return Referencia al flujo de entrada.
 */
std::istream& operator>>(std::istream& in, Cars& coche) {
  std::cout << "Ingrese el tipo de coche: ";
  in >> coche.tipo_;
  std::cout << "Ingrese la marca del coche: ";
  in >> coche.marca_;
  std::cout << "Ingrese el modelo del coche: ";
  in >> coche.modelo_;
  std::cout << "Ingrese el precio del coche: ";
  in >> coche.precio_;
  return in;
}
