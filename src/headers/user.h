#pragma once
#include "pch.h"
#include <string>
#include <array>
#include "Field.h"

#ifndef	USER_H	
#define USER_H


class User
{
public:
	
	void setName(std::string sName);

	User();
	User(std::string name);
private: 
	std::string userName;
	Field userFeilds[5];

};

#endif