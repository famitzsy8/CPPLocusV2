#ifndef __CONNECTION_H__
#define __CONNECTION_H__

#include<vector>
#include<cstddef>
#include<string>

#include "./City.h"
#include "./Service.h"
#include "./Station.h"

typedef std::string str;
typedef std::size_t size_t;

export class Connection {
	public:
		City &city;
		Service &service;
		Station &start;
		Station &end;
};

#endif