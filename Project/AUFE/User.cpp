#include "User.h"

User::User(string pw, FileList fl)
{
	this->Password == pw;
	this->filelist = fl;
}

bool User::setpassword(string nowpw, string newpw, string confirm)
{
	if (checkPW(nowpw))
	{
		if (newpw==confirm)
		{
			this->Password = newpw;
		}
	}
	else
	{
		//TURN TO UI
	}
	
}

bool User::checkPW(string pw)
{
	return pw == this->Password ? 1 : 0;
}