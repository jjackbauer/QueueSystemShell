#include "Event.hpp"

Event::Event(long double iat,long double st,long double at, long double bs,long double es,int nq)
{
	setArrivalInterval(iat);
	setServiceTime(st);
	setArrivalTime(at);
	setBeginService(bs);
	setEndService(es);
	setCurrentQueueSize(nq);
}
Event::Event()
{
	setArrivalInterval(0);
	setServiceTime(0);
	setArrivalTime(0);
	setBeginService(0);
	setEndService(0);
	setCurrentQueueSize(0);
}
void Event::setArrivalInterval(long double iat)
{
	if(iat >= 0)
		arrivalInterval=iat;
	//else
		//make error message handler with verbosity levels
}
void Event::setServiceTime(long double st)
{
	if(st >= 0)
		serviceTime=st;
	//else
		//make error message handler with verbosity levels
}
void Event::setArrivalTime(long double at)
{
	if(at >= 0)
		arrivalTime=at;
	//else
		//make error message handler with verbosity levels
}
void Event::setBeginService(long double bs)
{
	if(bs >= 0)
		beginService=bs;
	//else
		//make error message handler with verbosity levels
}
void Event::setEndService(long double es)
{
	if(es >= 0)
		endService=es;
	//else
		//make error message handler with verbosity levels
}
void Event::setCurrentQueueSize(int nq)
{
	if(nq >= 0)
		currenteQueueSize=nq;
	//else
		//make error message handler with verbosity levels
}
long double Event::getArrivalInterval()
{
	return arrivalInterval;
}
long double Event::getServiceTime()
{
	return serviceTime;
}
long double Event::getArrivalTime()
{
	return arrivalTime;
}
long double Event::getBeginService()
{
	return beginService;
}
long double Event::getEndService()
{
	return endService;
}
int Event::getCurrentQueueSize()
{
	return currenteQueueSize;
}
