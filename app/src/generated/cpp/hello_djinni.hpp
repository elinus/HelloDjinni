// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from Hello.djinni

#pragma once

#include <memory>
#include <string>

namespace hd {

class HelloDjinni {
public:
    virtual ~HelloDjinni() {}

    static std::shared_ptr<HelloDjinni> create();

    virtual void fromLanguage(const std::string & key) = 0;

    virtual std::string fromCpp() = 0;
};

}  // namespace hd