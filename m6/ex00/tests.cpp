/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr <marvin@42.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:05 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/01 16:58:27 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main( void ) {
	ScalarConverter sc;

	std::cout << G << "Tests qui doivent réussir" <<	RE << std::endl;
	sc.convert("0.0");         // Test avec un double : doit réussir
	sc.convert("6");           // Test avec un entier : doit réussir
	sc.convert("0.0f");        // Test avec un float : doit réussir
	sc.convert("1.1234f");     // Test avec un float : doit réussir
	sc.convert("c");           // Test avec un caractère : doit réussir
	sc.convert("aString");     // Test avec une chaîne de caractères : doit réussir
	sc.convert("42");          // Test avec un entier : doit réussir
	sc.convert("-42");         // Test avec un entier : doit réussir
	sc.convert("42.0");        // Test avec un double : doit réussir
	sc.convert("-42.0");       // Test avec un double : doit réussir
	sc.convert("42.0f");       // Test avec un float : doit réussir
	sc.convert("-42.0f");      // Test avec un float : doit réussir
	sc.convert("42.42");       // Test avec un double : doit réussir
	sc.convert("-42.42");      // Test avec un double : doit réussir
	sc.convert("Infinity");    // Test avec +inf (infini positif) : doit réussir
	sc.convert("-Infinity");   // Test avec -inf (infini négatif) : doit réussir
	sc.convert("NaN");         // Test avec NaN (Not-a-Number) : doit réussir
	sc.convert("1.7976931348623157E308"); // Test avec le plus grand double possible : doit réussir
	sc.convert("-1.7976931348623157E308"); // Test avec le plus petit double possible : doit réussir
	
	std::cout << std::endl;
	std::cout << G << "Tests qui doivent échouer avec des messages d'erreur" << RE << std::endl;
	sc.convert("true");         // Test avec un booléen : doit échouer
	sc.convert("false");        // Test avec un booléen : doit échouer
	sc.convert("null");         // Test avec la valeur null : doit échouer
	sc.convert("");             // Test avec une chaîne vide : doit échouer
	sc.convert("text");         // Test avec une chaîne de caractères : doit échouer
	sc.convert("1.2.3");        // Test avec une chaîne de caractères non parsable en double : doit échouer
	sc.convert("1.23.45");      // Test avec une chaîne de caractères non parsable en double : doit échouer
	sc.convert("1.23a");        // Test avec une chaîne de caractères non parsable en double : doit échouer
	sc.convert("1.23.45f");     // Test avec une chaîne de caractères non parsable en float : doit échouer
	sc.convert("1.23a");        // Test avec une chaîne de caractères non parsable en float : doit échouer
	sc.convert("$123.45");      // Test avec une chaîne de caractères contenant un symbole : doit échouer
	sc.convert("42L");          // Test avec une chaîne de caractères contenant un suffixe inconnu : doit échouer
	sc.convert("0x1A");         // Test avec une chaîne de caractères hexadécimale : doit échouer
	sc.convert("0b1010");       // Test avec une chaîne de caractères binaire : doit échouer
	sc.convert("1.23e");        // Test avec une chaîne de caractères exponentielle incorrecte : doit échouer
	
	std::cout << std::endl;
	std::cout << G << "Tests spécifiques et tordus pour vérifier la robustesse" << RE << std::endl;
	sc.convert("3.14abc");            // Test avec une partie valide suivie de caractères inattendus : doit échouer
	sc.convert("0x12.34");            // Test avec une notation hexadécimale non prise en charge : doit échouer
	sc.convert("1.23e+1000");         // Test avec une valeur en notation exponentielle hors de portée : doit échouer
	sc.convert("1.23e-1000");         // Test avec une valeur en notation exponentielle hors de portée : doit échouer
	sc.convert("0.0000000001");       // Test avec une valeur très petite : doit réussir
	sc.convert("1e1000000");          // Test avec une valeur très grande : doit réussir
	sc.convert("3.14fxyz");           // Test avec un suffixe "f" suivi de caractères inattendus : doit échouer
	sc.convert("0x1A42.42");          // Test avec une partie valide suivie d'une notation hexadécimale non prise en charge : doit échouer
	sc.convert("42.42e3abc");         // Test avec une notation exponentielle suivie de caractères inattendus : doit échouer
	sc.convert("Infinityxyz");        // Test avec "Infinity" suivi de caractères inattendus : doit échouer
	sc.convert("NaN123");             // Test avec "NaN" suivi de caractères inattendus : doit échouer
	sc.convert("-Infinity.42");       // Test avec "-Infinity" suivi d'un point décimal : doit échouer
	return (0);
}
