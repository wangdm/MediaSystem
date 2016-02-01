#ifndef _COMPORT_H_
#define _COMPORT_H_

class Comport
{
public:
	Comport();
	~Comport();

protected:

private:

};

class ComportManager
{
public:
	ComportManager * GetInstance();
	int EnumComport();

protected:

private:
	ComportManager * instance;
};

#endif