#pragma once

#include <string>

// items interface
class items {

public:
	virtual std::string name() = 0;
	virtual std::string type() = 0;
};

