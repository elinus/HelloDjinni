#include "HelloDjinniImpl.h"

#include <memory>
#include <string>

namespace hd {

    HelloDjinniImpl::HelloDjinniImpl() = default;

    std::shared_ptr<HelloDjinni> HelloDjinni::create() {
        return std::make_shared<HelloDjinniImpl>();
    }

    std::string HelloDjinniImpl::fromCpp() {
        std::string _str = "C++ says Hello World!";
        _str += message_from_language;
        return _str;
    }

    void HelloDjinniImpl::fromLanguage(const std::string &key) {
        message_from_language = key;
    }
}