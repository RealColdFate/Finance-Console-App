#include "pch.h"
#include "Field.h"
#include <string>

using std::string;

std::string fieldName;

void Field::setName(std::string sName)
{
	for (unsigned int i = 0; static_cast<int> (i < sName.length()); ++i)
	{
		if (sName.at(i) == ' ')
		{
			std::cout << "The Name must not include any spaces. \nThis name has been set to \n\"Temp_Field In order to rename this field use \"setName(\"Example_Name\")\".";
			fieldName = "Temp_Field";
			return;
		}
		fieldName = sName; 
	}

}

Field::Field()
{
	fieldName = "Default_Field";
}
Field::Field(std::string name)
{
	setName(name);
}

string Field::getName()
{
	return fieldName;
}
