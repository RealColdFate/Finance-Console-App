#include "pch.h"
#include "user.h"
#include <string>


std::string userName = "Default_User";
Field fields[];


void User::setName(std::string sName)
{
	for (unsigned int i = 0; static_cast<int> (i < sName.length()); ++i)
	{
		if (sName.at(i) == ' ')
		{
			std::cout << "The Name must not include any spaces. \nThis name has been set to \n\"Temp_User\" In order to rename this field use \"setName(\"Example_Name\")\".";
			userName = "Temp_User";
			return;
		}
		userName = sName;
	}

}

User::User()
{
}

User::User(std::string name)
{
	setName(name);
}
