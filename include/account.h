#include <iostream>
#include <cmath>

class CreateAccount {
private:
	std::string _username;
	std::string _password;
public:
	CreateAccount(std::string usrName, std::string pwd);
	void ShowInformation();
};