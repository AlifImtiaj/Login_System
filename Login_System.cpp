// Login_System.cpp : Defines the entry point for the application.
//

#include "Login_System.h"
#include <account.h>


int main()
{
	CreateAccount c1("Alif Imtiaj", "Password123");
	c1.ShowInformation();
	return 0;
}
