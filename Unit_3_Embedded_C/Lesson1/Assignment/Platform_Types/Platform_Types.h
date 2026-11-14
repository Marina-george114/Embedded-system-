/*
 * Platform_Types.h
 *
 *  Created on: Nov 14, 2026
 *      Author: Marina
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


//////////////*typedef*////////

typedef _Bool  boolean;
#ifndef TRUE
#define TRUE ((boolean)1)
#endif

#ifndef FALSE
#define FALSE ((boolean)0)
#endif

typedef unsigned char   uint8_t;   //1byte
typedef unsigned short  uint16_t;  //2bytes
typedef unsigned int     uint32_t;  //4bytes
typedef unsigned  long long uint64_t; //8bytes
//typedef unsigned  long uint32_t;
//typedef unsigned float uint32_t;
//typedef unsigned double uint64_t;
typedef signed char sint8_t;  //same size but diff range
typedef signed short sint16_t;
typedef signed int  sint32_t;
typedef signed long long sint64_t;


typedef volatile unsigned char vuint8_t;
typedef volatile  unsigned short  vuint16_t;  //2bytes
typedef volatile unsigned int     vuint32_t;  //4bytes
typedef  volatile unsigned  long long vuint64_t; //8bytes


typedef volatile signed char vsint8_t;  //same size but diff range
typedef  volatile signed short vsint16_t;
typedef  volatile signed int  vsint32_t;
typedef volatile signed long long vsint64_t;


typedef float       float32;
typedef double      float64;




#endif /* PLATFORM_TYPES_H_ */
