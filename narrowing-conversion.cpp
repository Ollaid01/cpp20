/**
 * @file narrowing-conversion.cpp
 * @author ollaid Mat
 * @brief conversion de type - risque d'etrecissement : securite et robustesse du code
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

using namespace std;

int main() {

    double pi_val = 3.14;
    int pi_to_int = pi_val;

    cout << "PI = " << pi_val << endl; // priorite en c++11
    cout << "PI conv to int = " << pi_to_int << endl; // perte d'info sans probleme signale

    // erreur de compilation - perte d'info - warning du compilateur
    // interet de la liste d'initalisation : etre conscient de la conversion explicite (securite et robustesse)
    // si on veut toujours forcer la conversion , utiliser la liste d'initalisation avec une converstion explicite : static_cast<type> (val)
    // int pi_to_int_listInit{pi_val};
    // cout << "PI conv to int with list initialisation = " << pi_to_int_listInit << endl; // perte d'info avec probleme signale par le compilateur

    // utilisation de la conversion explicite
    int pi_toInt_exp{static_cast<int> (pi_val)};
    cout << "PI conv to int with list initialisation (explicite conversion) = " << pi_toInt_exp << endl; // perte d'info sans probleme signale par le compilateur
    

    return 0;
}