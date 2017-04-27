#include <iostream>
#include "reflexivity.hpp"
#include "variant_value.hpp"

int main()
{
	Reflexivity reflexive_instance;

	std::cout << "Starting: " <<std::endl;
	reflexive_instance.execute("action_1", Variant_Value(55.5));
	reflexive_instance.execute("action_1", Variant_Value(.0));
//	reflexive_instance.execute("action_1", Variant_Value(55)); // this will fail because action_1 is of type double
	reflexive_instance.execute("action_2", Variant_Value(42)); // action_2 doesn't exist so nothing happen
	return 0;
}