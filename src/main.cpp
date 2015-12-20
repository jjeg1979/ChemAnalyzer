/*! main.cpp
 *         Program to test classes for ChemAnalyzer
 *
 *  Detailed description starts here.
 */
 
 #include <iostream>
 #include "../include/Terminal.h"
 
 using namespace std;
 using namespace Terminales;
 
 int main()
 {
	 Lower_case Reactivo1;
	 Lower_case Reactivo2;
	 
	 std::cout << "Introduzca un reactivo:\n";
	 std::cin >> Reactivo2;
	 
	 std::cout << "Reactivo por defecto: " << Reactivo1 << '\n';
	 std::cout << "Reactivo introducido por el usuario: " << Reactivo2 << std::endl;
	 return 0;
 }