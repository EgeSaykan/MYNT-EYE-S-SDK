// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include "djinni_support.hpp"
#include "stream_request.hpp"

namespace djinni_generated {

class NativeStreamRequest final {
public:
    using CppType = ::mynteye_jni::StreamRequest;
    using JniType = jobject;

    using Boxed = NativeStreamRequest;

    ~NativeStreamRequest();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeStreamRequest();
    friend ::djinni::JniClass<NativeStreamRequest>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/slightech/mynteye/StreamRequest") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(IIILcom/slightech/mynteye/Format;I)V") };
    const jfieldID field_mIndex { ::djinni::jniGetFieldID(clazz.get(), "mIndex", "I") };
    const jfieldID field_mWidth { ::djinni::jniGetFieldID(clazz.get(), "mWidth", "I") };
    const jfieldID field_mHeight { ::djinni::jniGetFieldID(clazz.get(), "mHeight", "I") };
    const jfieldID field_mFormat { ::djinni::jniGetFieldID(clazz.get(), "mFormat", "Lcom/slightech/mynteye/Format;") };
    const jfieldID field_mFps { ::djinni::jniGetFieldID(clazz.get(), "mFps", "I") };
};

}  // namespace djinni_generated
