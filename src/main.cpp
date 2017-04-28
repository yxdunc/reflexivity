#include <iostream>
#include "reflexivity.hpp"
#include "variant_value.hpp"

int main()
{
	Reflexivity reflexive_instance;

	std::cout << "Starting: " <<std::endl;
	reflexive_instance.execute("action_1", Variant_Value(55.5));
	reflexive_instance.execute("action_1", Variant_Value(.0));

	// wrong type for function call so nothing happens
	reflexive_instance.execute("action_1", Variant_Value(55));

	// action_2 doesn't exist so nothing happen
	reflexive_instance.execute("action_2", Variant_Value(42));
	return 0;
}
