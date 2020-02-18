// File: stream_common.h
// See Copyright Notice and license at the end of include/lzham.h
#pragma once

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <cstdarg>
#include <malloc.h>
#include <string>
#include <vector>

#define LZHAM_EX_MAX(a,b) (((a) > (b)) ? (a) : (b))
#define LZHAM_EX_MIN(a,b) (((a) < (b)) ? (a) : (b))

#if __BIG_ENDIAN__
   #define LZHAM_EX_LITTLE_ENDIAN_CPU 0
#else
   #define LZHAM_EX_LITTLE_ENDIAN_CPU 1
#endif

namespace lzham_ex
{
   using uint8 = uint8_t;
   using int8 = int8_t;
   using uint8 = uint8_t;
   using uint16 = uint16_t;
   using int16 = int16_t;
   using uint32 = uint32_t;
   using uint = uint32;
   using int32 = int32_t;
   using uint64 = uint64_t;
   using int64 = int64_t;

   inline constexpr uint8  UINT8_MIN = 0;
   inline constexpr uint16 UINT16_MIN = 0;
   inline constexpr uint32 UINT32_MIN = 0;
   inline constexpr uint64 UINT64_MIN = 0;

   template<typename T> inline void zero_object(T& obj) { memset(&obj, 0, sizeof(obj)); }
} // namespace lzham_ex
