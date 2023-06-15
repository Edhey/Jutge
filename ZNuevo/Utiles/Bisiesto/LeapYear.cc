#include <iostream>

/**
 * @brief Función que comprueba si un año dado es bisiesto.
 * @param year año a comprobar.
 * @return true: si es bisiesto.
 *         false: en caso contratio.
 */
bool IsLeapYear(int year) {
  const int kNumero4{4}, kNumero100{100};
  if ((year % kNumero4 == 0) && (year % kNumero100 != 0)) {
    return true;
  } else if (year % kNumero4 == 0 && year % kNumero100 == 0 &&
             (year / kNumero100) % kNumero4 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int year{};
  while (std::cin >> year) {
    IsLeapYear(year) ? std::cout << "true" : std::cout << "false";
    std::cout << std::endl;
  }
  return 0;
}