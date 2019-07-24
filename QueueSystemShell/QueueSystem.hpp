#ifndef QUEUESYSTEM_HPP_
#define QUEUESYSTEM_HPP_
//STD libraries
#include <vector>
#include <iostream>
//OtherClasses
#include "Event.hpp"





class QueueSystem
{
	private:
		long double	expectedArrivalInterval;
		long double	expectedServiceTime;
		long double timeScaller;
		static int 	shellVerbosity;
		static int	reportVerbosity;
		std::vector<Event> events;

	public:
};
#endif /* QUEUESYSTEM_HPP_ */
