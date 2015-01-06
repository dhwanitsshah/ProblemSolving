#include "Sample.hpp"
using namespace std;

namespace ns_sample {

string& Sample::getContent() {
	return *ptr;
}

}
;

