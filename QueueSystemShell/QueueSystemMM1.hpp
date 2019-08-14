#ifndef QUEUESYSTEMMM1_HPP_
#define QUEUESYSTEMMM1_HPP_
#include "QueueSystem.hpp"
#include <string>

class QueueSystemMM1:public QueueSystem
{
        QueueSystemMM1(long double expectedArrivalInterval,long double expectedServiceTime,long double timeScaler=1);
		QueueSystemMM1(int numberOfEvents,long double expectedArrivalInterval,long double expectedServiceTime,long double timeScaler=1);
		 ~QueueSystemMM1();
		void start(void);
		void event(int eventNumber);
		void simulate(void);
		void parse(std::string command);
		void report(std::string fileName);
		void graphicalDemo(bool newSimulation=false,long double timeScaler=1);

};

#endif /* QUEUESYSTEMMM1_HPP_ */
