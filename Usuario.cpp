#include "Usuario.h"
#include <iostream>
#include <string>

Usuario::Usuario(string _login, string _password)
{
    login = _login;
    password = _password;
}

bool Usuario::verificarLogin(string _login, string _password) {
    return (login == _login && password == _password);
};
