#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario
{
private:
	//Atributos
	string login;
	string password;
	//Metodos
public:
	Usuario(string _login, string _password);
	bool verificarLogin(string _login, string _password);

};

