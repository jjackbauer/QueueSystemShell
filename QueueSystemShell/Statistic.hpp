#ifndef STATISTIC_HPP_
#define STATISTIC_HPP_
//STD libraries
#include <vector>
#include "Event.hpp"

class Statistic
{
	private:
		std::vector<long double> expectedValues;
		std::vector<long double> varianceValues;
		//Still needed interface for basic operations
	public:
		Statistic(std::vector<Event> events);
};

#endif /* STATISTIC_HPP_ */
