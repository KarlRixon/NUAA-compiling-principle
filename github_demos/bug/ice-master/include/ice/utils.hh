#ifndef _ICE_UTILS_HH_INCLUDED_
#define _ICE_UTILS_HH_INCLUDED_

#include <list>
#include <string>

namespace ice {
    namespace utils {
        typedef std::list<std::string> string_list;

        std::string join(const char *sep, const string_list& list);

        std::string make_package_name(const string_list& fqn);
    };
};

#endif

