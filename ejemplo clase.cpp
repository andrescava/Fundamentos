// ejemplo clase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Usuario.h"

int main() {
    Usuario usuario("miUsuario", "miContrasena");

    string inputUsuario, inputpassword;

    cout << "Ingrese su nombre de usuario: ";
    cin >> inputUsuario;
    cout << "Ingrese su contraseña: ";
    cin >> inputpassword;

    if (usuario.verificarLogin(inputUsuario, inputpassword)) {
        cout << "Acceso concedido. ¡Bienvenido!" << endl;
    }
    else {
        cout << "Credenciales incorrectas. Acceso denegado." << endl;
    }

    return 0;
}
