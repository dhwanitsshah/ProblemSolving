#include "Node.hpp"
#include <string>

namespace ns_data_structure {

using namespace std;

bool Node::operator==(Node that) {
	if (this->id == that.id && this->name.compare(that.name) == 0) {
		return true;
	}
	return false;
}

}
