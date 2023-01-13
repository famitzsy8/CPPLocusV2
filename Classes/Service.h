#ifndef __SERVICE_H__
#define __SERVICE_H__

#include<vector>
#include<cstddef>
#include<string>

#include "./Connection.h"
#include "./Station.h"
#include "./City.h"

typedef std::string str;
typedef std::size_t size_t;

class Service {
	public:
		City &city;
		char type;
		size_t index;

		std::vector<Connection> connections;
		Station &start;
		Station &end;

};

#endif