#ifndef __HELLO_DJINNI_IMPL_H__
#define __HELLO_DJINNI_IMPL_H__

#include "hello_djinni.hpp"
#include <string>
#include <iostream>

namespace hd {

    class HelloDjinniImpl : public hd::HelloDjinni {
    public:
        HelloDjinniImpl();
        void fromLanguage(const std::string & key);
        std::string fromCpp();

    private:
        std::string message_from_language;
    };

}


#endif //__HELLO_DJINNI_IMPL_H__
