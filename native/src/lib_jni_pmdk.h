/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lib_jni_pmdk */

#ifndef _Included_lib_jni_pmdk
#define _Included_lib_jni_pmdk
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lib_jni_pmdk
 * Method:    nativeOpenDevice
 * Signature: (Ljava/lang/String;IIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeOpenDevice
  (JNIEnv *, jclass, jstring, jint maxStage, jint maxMap, jlong size);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeSetMapPartition
 * Signature: (JIIIIJZI)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeSetMapPartition
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jobject, jint, jboolean, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeSetReducePartition
 * Signature: (JIIIIJZI)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeSetReducePartition
  (JNIEnv *, jclass, jlong, jint, jint, jint, jobject, jint, jboolean, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetPartition
 * Signature: (JIII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetMapPartition
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetPartition
 * Signature: (JIII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetReducePartition
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeCloseDevice
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeCloseDevice
  (JNIEnv *, jclass, jlong);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetMapPartitionBlockInfo
 * Signature: (JIII)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetMapPartitionBlockInfo
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetReduceMapPartitionBlockInfo
 * Signature: (JIII)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetReducePartitionBlockInfo
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetMapPartitionSize
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetMapPartitionSize
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetReducePartitionSize
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetReducePartitionSize
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeDeleteMapPartition
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeDeleteMapPartition
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeDeleteReducePartition
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeDeleteReducePartition
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetRoot
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PersistentMemoryPool_nativeGetRoot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeNewPmemBuffer
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeNewPmemBuffer
  (JNIEnv *, jobject);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeLoadPmemBuffer
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeLoadPmemBuffer
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeReadBytesFromPmemBuffer
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeReadBytesFromPmemBuffer
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeWriteBytesToPmemBuffer
 * Signature: (J[BIII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeWriteBytesToPmemBuffer
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetPmemBufferRemaining
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeGetPmemBufferRemaining
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeGetPmemBufferDataAddr
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeGetPmemBufferDataAddr
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeCleanPmemBuffer
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeCleanPmemBuffer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_jni_pmdk
 * Method:    nativeDeletePmemBuffer
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_spark_storage_pmof_PmemBuffer_nativeDeletePmemBuffer
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif