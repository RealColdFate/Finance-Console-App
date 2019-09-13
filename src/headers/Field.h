#pragma once
#include "pch.h"
#include <string>
#include <iostream>


#ifndef FIELD_H
#define FIELD_H


class Field
{
public:
	Field();
	Field(std::string name);
	std::string getName();
	void setName(std::string);
private:
	std::string name = "Default_Field";

};



#endif 

