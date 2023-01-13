#ifndef __USERDEFAULTS_H__
#define __USERDEFAULTS_H__

struct UserDefaults {
	public:
		City &currentCity;
		City &nextCity;

		Station &base;

		// default service / line
		char defaultType;
		size_t defaultIndex;

};

#endif