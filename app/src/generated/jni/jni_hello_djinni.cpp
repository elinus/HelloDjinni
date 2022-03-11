// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from Hello.djinni

#include "jni_hello_djinni.hpp"  // my header
#include "djinni/jni/Marshal.hpp"

namespace djinni_generated {

JNIHelloDjinni::JNIHelloDjinni() : ::djinni::JniInterface<::hd::HelloDjinni, JNIHelloDjinni>("com/example/hellodjinni/HelloDjinni$CppProxy") {}

JNIHelloDjinni::~JNIHelloDjinni() = default;


CJNIEXPORT void JNICALL Java_com_example_hellodjinni_HelloDjinni_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::hd::HelloDjinni>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_example_hellodjinni_HelloDjinni_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::hd::HelloDjinni::create();
        return ::djinni::release(::djinni_generated::JNIHelloDjinni::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_example_hellodjinni_HelloDjinni_00024CppProxy_native_1fromLanguage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_key)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::hd::HelloDjinni>(nativeRef);
        ref->fromLanguage(::djinni::String::toCpp(jniEnv, j_key));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_example_hellodjinni_HelloDjinni_00024CppProxy_native_1fromCpp(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::hd::HelloDjinni>(nativeRef);
        auto r = ref->fromCpp();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
