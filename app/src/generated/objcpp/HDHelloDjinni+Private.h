// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from Hello.djinni

#include "hello_djinni.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class HDHelloDjinni;

namespace djinni_generated {

class HelloDjinni
{
public:
    using CppType = std::shared_ptr<::hd::HelloDjinni>;
    using CppOptType = std::shared_ptr<::hd::HelloDjinni>;
    using ObjcType = ::HDHelloDjinni*;

    using Boxed = HelloDjinni;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

