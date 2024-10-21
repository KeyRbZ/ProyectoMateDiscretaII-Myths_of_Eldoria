#include <iostream>

void Menu_principal() {
  std::cout << "========================================" << std::endl;
  std::cout << "===       *         *            *    ==" << std::endl;
  std::cout << "===      BIENVENIDOS A ELDORIA    *   ==" << std::endl;
  std::cout << "===        El Ocaso de la Paz         ==" << std::endl;
  std::cout << "===   *                         *     ==" << std::endl;
  std::cout << "===          *             *          ==" << std::endl;
  std::cout << "========================================" << std::endl;

  std::cout << "Hola Aventurero, elige una opcion: " << std::endl;
  std::cout << "-> 1. Jugar\n";
  std::cout << "-> 2. Ver personajes\n";
  std::cout << "-> 3. Salir\n";

}

int main() {
  int opcion;

  do {
    Menu_principal();
    std::cin >> opcion;

    switch (opcion) {
      case 1:
        std::cout << "Iniciar el juego\n";
        break;
      case 2:
        std::cout << "Mostrar personajes\n";
        break;
      case 3:
        std::cout << "Salir del programa\n";
      default:
        std::cout << "Opcion no valida\n";
    }
    std::cout << std::endl;

  } while (opcion != 3);

  return 0;
}