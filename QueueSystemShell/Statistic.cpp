#include "Statistic.hpp"
#include <limits>
const int Statistic::iat=0;
const int Statistic::st=1;
const int Statistic::at=2;
const int Statistic::bs=3;
const int Statistic::es=4;
const int Statistic::nq=5;

const int Statistic::basicReport=2;
const int Statistic::fullReport=3;
const int Statistic::simulationReport=5;
const int Statistic::meanValues=7;
const int Statistic::varValues=11;
const int Statistic::minValues=13;
const int Statistic::maxValues=17;

bool hasFactor(int a,int factor)
{
	return !(a%factor);
}
Statistic::Statistic(std::vector<Event> events)
{
	std::vector<long double> sum(6,0),squaredSum(6,0),min(6,std::numeric_limits<long double>::max()),max(6,std::numeric_limits<long double>::min());
	int n = events.size();
	expectedValues.reserve(6);
	varianceValues.reserve(6);
	for(auto&& e:events)
	{
		sum[iat]+=e.getArrivalInterval();
		sum[st]+=e.getServiceTime();
		sum[at]+=e.getArrivalTime();
		sum[bs]+=e.getBeginService();
		sum[es]+=e.getEndService();
		sum[nq]+=e.getCurrentQueueSize();
		squaredSum[iat]+=e.getArrivalInterval()*e.getArrivalInterval();
		squaredSum[st]+=e.getServiceTime()*e.getServiceTime();
		squaredSum[at]+=e.getArrivalTime()*e.getArrivalTime();
		squaredSum[bs]+=e.getBeginService()*e.getBeginService();
		squaredSum[es]+=e.getEndService()*e.getEndService();
		squaredSum[nq]+=e.getCurrentQueueSize()*e.getCurrentQueueSize();

		if(e.getArrivalInterval() > max[iat])
			max[iat]=e.getArrivalInterval();
		if(e.getServiceTime() > max[st])
			max[st]=e.getServiceTime();
		if(e.getArrivalTime() > max[at])
			max[at]=e.getArrivalTime();
		if(e.getBeginService() > max[bs])
			max[bs]=e.getBeginService();
		if(e.getEndService() > max[es])
			max[es]=e.getEndService();
		if(e.getCurrentQueueSize() > max[nq])
			max[nq]=e.getCurrentQueueSize();

		if(e.getArrivalInterval() < min[iat])
			min[iat]=e.getArrivalInterval();
		if(e.getServiceTime() < min[st])
			min[st]=e.getServiceTime();
		if(e.getArrivalTime() < min[at])
			min[at]=e.getArrivalTime();
		if(e.getBeginService() < min[bs])
			min[bs]=e.getBeginService();
		if(e.getEndService() < min[es])
			min[es]=e.getEndService();
		if(e.getCurrentQueueSize() < min[nq])
			min[nq]=e.getCurrentQueueSize();
	}

	expectedValues[iat] = sum[iat]/n;
	expectedValues[st] = sum[st]/n;
	expectedValues[at] = sum[at]/n;
	expectedValues[bs] = sum[bs]/n;
	expectedValues[es] = sum[es]/n;
	expectedValues[nq] = sum[nq]/n;

	varianceValues[iat] = squaredSum[iat]/n - expectedValues[iat]*expectedValues[iat];
	varianceValues[st] = squaredSum[st]/n - expectedValues[st]*expectedValues[st];
	varianceValues[at] = squaredSum[at]/n - expectedValues[at]*expectedValues[at];
	varianceValues[bs] = squaredSum[bs]/n - expectedValues[bs]*expectedValues[bs];
	varianceValues[es] = squaredSum[es]/n - expectedValues[es]*expectedValues[es];
	varianceValues[nq] = squaredSum[nq]/n - expectedValues[nq]*expectedValues[nq];

	minimumValues = std::move(min);
	maximumValues = std::move(max);

}
std::string Statistic::statisticReport(int verbosity)
{

}
std::string Statistic::statisticShell(int verbosity)
{

}
