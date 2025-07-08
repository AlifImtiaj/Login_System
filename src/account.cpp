#include "account.h"

CreateAccount::CreateAccount(std::string usrName, std::string pwd) {
	_username = usrName;
	_password = pwd;
}

void CreateAccount::ShowInformation() {
	std::cout << "Name: " << _username << std::endl;
	std::cout << "Password: " << _password << std::endl;
}
