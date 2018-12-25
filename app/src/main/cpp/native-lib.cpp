#include <jni.h>
#include <string>
#include <iostream>
#include<android/log.h>
#include "A.h"

//Android JNI Log用法
//https://www.jianshu.com/p/acbf724fdcc9
#ifndef LOG_TAG
#define LOG_TAG "HELLO_JNI"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,LOG_TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,LOG_TAG ,__VA_ARGS__) // 定义LOGF类型
#endif


using namespace std;
extern "C" JNIEXPORT jstring JNICALL
Java_hamigo_com_tw_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
string fromJohn(){
    string helloJohn = "Hello from C++ John";
    return helloJohn;
}
extern "C" JNIEXPORT jstring JNICALL
Java_hamigo_com_tw_myapplication_MainActivity_stringFromJohn(
        JNIEnv *env,
jobject /* this */) {
string hello = fromJohn();

    LOGD("LOG from JNI");
    //Test test = Test();


    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_hamigo_com_tw_myapplication_MainActivity_stringFromCafeshop(
        JNIEnv *env,
        jobject /* this */) {

    Cafeshop NikiLike("Niki want Drink cafe!");
    string hello = NikiLike.tellservice();
    return env->NewStringUTF(hello.c_str());
}