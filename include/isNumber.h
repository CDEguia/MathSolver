#ifndef ISNUMBER_H_INCLUDED
#define ISNUMBER_H_INCLUDED

bool isNumber(char temp) {
	if (temp >= '0' && temp <= '9') {
		return true;
	}
	else
	{
		return false;
	}
}

#endif // ISNUMBER_H_INCLUDED
