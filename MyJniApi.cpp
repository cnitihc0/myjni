#include "MyJniApi.h"

JNIEXPORT jint JNICALL Java_test_MyJniApi_sum
(JNIEnv *env, jobject object, jint a, jint b) {
  return a + b;
}