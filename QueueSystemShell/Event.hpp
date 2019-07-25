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
				Event();//Clean Constructor
				void setArrivalInterval(long double iat);
				void setServiceTime(long double st);
				void setArrivalTime(long double at);
				void setBeginService(long double bs);
				void setEndService(long double es);
				void setCurrentQueueSize(int nq);
				long double getArrivalInterval();
				long double getServiceTime();
				long double getArrivalTime();
				long double getBeginService();
				long double getEndService();
				int getCurrentQueueSize();
};




#endif /* EVENT_HPP_ */
