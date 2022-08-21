#ifdef USE_CUSTOM_LIST
    #include "list.h"
    #define __list list
#else
    #include <list>
    #define __list std::list
#endif