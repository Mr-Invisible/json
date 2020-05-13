#ifndef _JSON_H_
#define _JSON_H_

#include "stdint.h"

typedef enum {
    jsonStatusErrorUnknown,
    jsonStatusErrorFormat,
    jsonStatusOk
} jsonStatus_t;

typedef enum {
    jsonTypeUnknown,
    jsonTypeObject,
    jsonTypeArray,
    jsonTypeString
} jsonType_t;

typedef struct {
    jsonType_t type;

} jsonHandle_t;

jsonStatus_t jsonInit(jsonHandle_t* pHandle, uint8_t* pBuffer, uint32_t bufferSize);

#endif /*_JSON_H_*/