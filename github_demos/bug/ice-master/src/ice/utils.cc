#include <sstream>

#include "ice/utils.hh"

std::string
ice::utils::join(const char *sep, const ice::utils::string_list& list)
{
    std::stringstream ss;
    ice::utils::string_list::const_iterator iter = list.begin();
    while (iter != list.end()) {
        ss << iter->c_str();
        iter++;
        if (iter != list.end()) ss << sep;
    }
    return ss.str();
}

std::string
ice::utils::make_package_name(const ice::utils::string_list& list)
{
    return join(".", list);
}

