#include "Event.hpp"

Event::Event(long double iat,long double st,long double at, long double bs,long double es,int nq)
{
	arrivalInterval=iat;
	serviceTime=st;
	arrivalTime=at;
	beginService=bs;
	endService=es;
	currenteQueueSize=nq;
}
