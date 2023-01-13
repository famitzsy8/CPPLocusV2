#ifndef __CITY_H__
#define __CITY_H__

#include<vector>
#include<cstddef>
#include<string>

#include "./Service.h"
#include "./Station.h"
#include "./UserDefaults.h"


typedef std::string str;
typedef std::size_t size_t;

class City {
	
	public:
		str name;
		// City Index in the vector of cities
		int index;

		std::vector<Service> services;
		std::vector<Station> stations;

		void addStation(str name, size_t index);
		void addService(char type, std::vector<size_t> stations);

		// FIXME: Define UserDefaults properly
		struct UserDefaults &udefs;

};

#endif