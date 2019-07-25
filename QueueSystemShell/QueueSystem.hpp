#ifndef QUEUESYSTEM_HPP_
#define QUEUESYSTEM_HPP_
//STD libraries
#include <vector>
#include <iostream>
#include <string>
//OtherClasses
#include "Event.hpp"
#include "Statistic.hpp"

class QueueSystem
{
	private:
		long double	expectedArrivalInterval;
		long double	expectedServiceTime;
		long double timeScaller;
		static int 	shellVerbosity;
		static int	reportVerbosity;
		std::vector<Event> events;
		std::vector<Statistic> statistics;
	public:
		QueueSystem(long double expectedArrivalInterval,long double expectedServiceTime,long double timeScaler=1);
		virtual ~QueueSystem()=0;
		virtual void start(void)=0;
		virtual void event(int eventNumber)=0;
		virtual void simulate(void)=0;
		virtual void parse(std::string command)=0;
		void report(std::string fileName);
		void graphicalDemo(bool newSimulation=false,long double timeScaler=1);

};

#endif /* QUEUESYSTEM_HPP_ */
