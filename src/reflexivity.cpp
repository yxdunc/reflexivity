#include "reflexivity.hpp"

Reflexivity::Reflexivity()
{
	register_action("action_1", &Reflexivity::action_1, typeid(double).name());
}

void		Reflexivity::register_action(std::string action_name, Member_Action action, std::string typeid_name)
{
    m_action_map[action_name] = action;
    m_action_param_type[action_name] = typeid_name;
}

void		Reflexivity::execute(std::string action_name, Variant_Value const &param)
{
 	// Method called unregistered
    if(m_action_map.find(action_name) == m_action_map.end()) {return ;}
	// Method called with wrong param type
    if(param.type() != m_action_param_type.at(action_name))  {return ;}

    auto action = std::bind(m_action_map.at(action_name), this, std::placeholders::_1);

    action(param);
}

void	Reflexivity::action_1(Variant_Value const &value)
{
	std::cout << "action 1 executed with argument: " << value.f << std::endl;
}
