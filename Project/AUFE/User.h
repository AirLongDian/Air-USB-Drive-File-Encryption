#pragma once

#ifndef USERCLASS
#define USERCLASS

#include <string>
#include "FileList.h"

using std::string;

class User
{
public:
	bool setpassword(string nowpw,string newpw,string confirm);
	bool checkPW(string pw);
	User(string pw, FileList fl);

private:
	string Password;
	FileList filelist;

};




#endif 

