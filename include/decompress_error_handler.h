#ifndef GUARD_DECOMPRESS_ERROR_HANDLER_H
#define GUARD_DECOMPRESS_ERROR_HANDLER_H

#include "gba/types.h"

enum CompressionError {
    NO_COMPRESSION_ERROR,
    HEADER_ERROR,
};

void DoDecompressionError(void);
void DecompressionError_CB2(void);
void DecompressionError(const u32 *src, enum CompressionError error);

#endif // GUARD_DECOMPRESS_ERROR_HANDLER_H
