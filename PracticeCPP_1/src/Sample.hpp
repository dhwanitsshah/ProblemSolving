#ifndef SAMPLE
#define SAMPLE
#include<iostream>
#include "string.h"
using namespace std;

namespace ns_sample {

class Sample {
public:
	string *ptr;

	Sample() :
			ptr(new string) {
	}
	Sample(string s) :
			ptr(new string(s)) {
	}
	Sample(Sample &x) :
			ptr(new string(x.getContent())) {
	}

	~Sample() {
		delete (ptr);
	}

	string& getContent();
};

}
#endif //SAMPLE
