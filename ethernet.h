#ifndef _ETHERNET_H_
#define _ETHERNET_H_

class Ethernet
{
public:
	Ethernet();
	~Ethernet();

private:

};

class EthernetManager
{
public:
	EthernetManager * GetInstance();
	int EnumEthernet();
protected:
private:
};

#endif