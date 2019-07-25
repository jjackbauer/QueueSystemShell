#include "QueueSystem.hpp"

int QueueSystem::shellVerbosity=0;
int QueueSystem::reportVerbosity=0;
QueueSystem::QueueSystem(long double expectedArrivalInterval,long double expectedServiceTime,long double timeScaler)
{
	QueueSystem::expectedArrivalInterval = expectedArrivalInterval;
	QueueSystem::expectedServiceTime = expectedServiceTime;
	QueueSystem::timeScaller = timeScaler;
}
void QueueSystem::report(std::string fileName)
{

}
void QueueSystem::graphicalDemo(bool newSimulation,long double timeScaler)
{

}
