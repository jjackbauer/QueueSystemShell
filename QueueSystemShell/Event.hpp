#ifndef EVENT_HPP_
#define EVENT_HPP_

class Event
{
	private:
	long double arrivalInterval;
	long double serviceTime;
	long double arrivalTime;
	long double beginService;
	long double endService;
	int			currenteQueueSize;

	public:
				Event(long double iat,long double st,long double at,long double bs,long double es, int nq);
};




#endif /* EVENT_HPP_ */
