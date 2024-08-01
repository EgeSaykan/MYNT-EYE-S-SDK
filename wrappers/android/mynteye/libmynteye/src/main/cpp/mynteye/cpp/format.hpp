// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include <functional>

namespace mynteye_jni {

enum class Format : int {
    /** Greyscale, 8 bits per pixel */
    GREY,
    /** YUV 4:2:2, 16 bits per pixel */
    YUYV,
    /** BGR 8:8:8, 24 bits per pixel */
    BGR888,
    /** RGB 8:8:8, 24 bits per pixel */
    RGB888,
};

}  // namespace mynteye_jni

namespace std {

template <>
struct hash<::mynteye_jni::Format> {
    size_t operator()(::mynteye_jni::Format type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
