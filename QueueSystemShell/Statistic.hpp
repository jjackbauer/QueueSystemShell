#ifndef STATISTIC_HPP_
#define STATISTIC_HPP_
//STD libraries
#include <vector>
#include <string>
//Other libraries
#include "Event.hpp"

class Statistic
{
	private:
		std::vector<long double> expectedValues;
		std::vector<long double> varianceValues;
		std::vector<long double> minimumValues;
		std::vector<long double> maximumValues;

		//Explicit Indexers
		static const int iat;
		static const int st;
		static const int at;
		static const int bs;
		static const int es;
		static const int nq;

		//Verbosity constants
		static const int basicReport;//Only essential information U,Er,Nq
		static const int fullReport;//Show all QueueSystem variables
		static const int simulationReport;//Shows all events
		static const int meanValues;//Show mean values of the variables
		static const int varValues;//Show variance values of the variables
		static const int minValues;//Show minimum values of the variables
		static const int maxValues;//Show maximum values of the variables


		bool hasFactor(int a,int factor);
	public:
		Statistic(std::vector<Event> events);
		std::string statisticReport(int verbosity);
		std::string statisticShell(int verbosity);
};

#endif /* STATISTIC_HPP_ */
