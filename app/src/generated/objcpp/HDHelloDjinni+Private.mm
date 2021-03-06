// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from Hello.djinni

#import "HDHelloDjinni+Private.h"
#import "HDHelloDjinni.h"
#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface HDHelloDjinni ()

- (id)initWithCpp:(const std::shared_ptr<::hd::HelloDjinni>&)cppRef;

@end

@implementation HDHelloDjinni {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::hd::HelloDjinni>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::hd::HelloDjinni>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable HDHelloDjinni *)create {
    try {
        auto objcpp_result_ = ::hd::HelloDjinni::create();
        return ::djinni_generated::HelloDjinni::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)fromLanguage:(nonnull NSString *)key {
    try {
        _cppRefHandle.get()->fromLanguage(::djinni::String::toCpp(key));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSString *)fromCpp {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->fromCpp();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto HelloDjinni::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto HelloDjinni::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<::HDHelloDjinni>(cpp);
}

}  // namespace djinni_generated

@end
