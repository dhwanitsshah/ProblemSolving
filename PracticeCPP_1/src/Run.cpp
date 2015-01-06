//============================================================================
// Name        : PracticeCPP_1.cpp
// Author      : Dhwanit Shah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Sample.hpp"

using namespace ns_sample;

int main() {

	Sample sam("Hello World");
	Sample sam2 = sam; //Deep Copy using Copy Constructor
	sam.ptr->assign("Hello Dhwanit");

	cout<<sam.getContent() << endl;
	cout<<sam2.getContent();

	return 0;
}

