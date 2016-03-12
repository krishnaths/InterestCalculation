//============================================================================
// Name        : CompundInterestRateCalculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include "CompoundIntRateCalculator.h"

//Constructor
CompoundIntRateCalculator::CompoundIntRateCalculator(double rate) :
		m_rate(rate) {

}

//destructor
CompoundIntRateCalculator::~CompoundIntRateCalculator() {

}

//assignment
CompoundIntRateCalculator::CompoundIntRateCalculator(
		const CompoundIntRateCalculator &v) :
		m_rate(v.m_rate) {

}

//operator
CompoundIntRateCalculator &CompoundIntRateCalculator::operator =(
		const CompoundIntRateCalculator &v) {
	if (this != &v) {
		this->m_rate = v.m_rate;

	}
	return *this;
}

double CompoundIntRateCalculator::multiplePeriod(double value, int numPeriods)
{
	double f = value * pow(1+m_rate, numPeriods);
}

double CompoundIntRateCalculator::continuousCompounding(double value, int numPeriods)
{
double f = value * exp(m_rate*numPeriods);
return f;
}
