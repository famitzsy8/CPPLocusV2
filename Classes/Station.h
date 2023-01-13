#ifndef __STATION_H__
#define __STATION_H__

#include<cstddef>
#include<vector>
#include<string>

#include "City.h"

typedef std::string str;
typedef std::size_t size_t;

class Station {
	public:
		City &city;

		str name;
		size_t index;

		// FIXME: define services class
		std::vector<Service> services;
		// pointer to where next type of services begin in services vector
		std::vector<size_t> service_ptr;
		
		bool doesServe(char type, size_t index);

};

#endif