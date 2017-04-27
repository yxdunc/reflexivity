#ifndef REFLEXIVITY
# define REFLEXIVITY

#include <map>
#include <string>
#include <functional>
#include <iostream>
#include <cassert>

#include "variant_value.hpp"

class Reflexivity 
{
    using Member_Action = void (Reflexivity::*)(Variant_Value const &value);
    using Action_Map = std::map<std::string, Member_Action >;
public:
	Reflexivity( void );
    virtual ~Reflexivity( void ) = default;
    void		execute(std::string action_name, Variant_Value const &param); // todo const ref

protected:
    void	register_action(std::string action_name, Member_Action action, std::string typeid_name);

private:
    Action_Map	m_action_map;
    std::map < std::string, std::string>			m_action_param_type;
	void    action_1(Variant_Value const &value);
};

#endif // !REFLEXIVITY
