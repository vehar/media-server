#ifndef _amf0_h_
#define _amf0_h_

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

enum AMFDataType
{
	AMF_NUMBER = 0x00,
	AMF_BOOLEAN,
	AMF_STRING,
	AMF_OBJECT,
	AMF_MOVIECLIP,
	AMF_NULL,
	AMF_UNDEFINED,
	AMF_REFERENCE,
	AMF_ECMA_ARRAY,
	AMF_OBJECT_END,
	AMF_STRICT_ARRAY,
	AMF_DATE,
	AMF_LONG_STRING,
	AMF_UNSUPPORTED,
	AMF_RECORDSET,
	AMF_XML_DOCUMENT,
	AMF_TYPED_OBJECT,
	AMF_AVMPLUS_OBJECT,
};

uint8_t* AMFWriteBoolean(uint8_t* out, size_t size, int value);
uint8_t* AMFWriteDouble(uint8_t* out, size_t size, double value);
uint8_t* AMFWriteString(uint8_t* out, size_t size, const char* string, size_t length);

uint8_t* AMFWriteNamedString(uint8_t* out, size_t size, const char* name, size_t length, const char* value, size_t length2);
uint8_t* AMFWriteNamedDouble(uint8_t* out, size_t size, const char* name, size_t length, double value);
uint8_t* AMFWriteNamedBoolean(uint8_t* out, size_t size, const char* name, size_t length, int value);

const uint8_t* AMFReadBoolean(const uint8_t* in, size_t size, int* value);
const uint8_t* AMFReadDouble(const uint8_t* in, size_t size, double* value);
const uint8_t* AMFReadString(const uint8_t* in, size_t size, int isLongString, char* string, size_t* length);

#ifdef __cplusplus
}
#endif
#endif /* !_amf0_h_ */