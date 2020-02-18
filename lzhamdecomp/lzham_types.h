// File: types.h
// See Copyright Notice and license at the end of include/lzham.h
#pragma once

#include <cstdint>
#include <climits>
#include <limits>

namespace lzham {
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

#if LZHAM_64BIT_POINTERS
	using uint_ptr = uintptr_t;
	using uint32_ptr = uintptr_t;
	using signed_size_t = intptr_t;
	using ptr_bits_t = uintptr_t;
	inline constexpr ptr_bits_t PTR_BITS_XOR = 0xDB0DD4415C87DCF7ULL;
#else
	using uint_ptr = uintptr_t;
	using uint32_ptr = uintptr_t;
	using signed_size_t = intptr_t;
	using ptr_bits_t = uintptr_t;
	inline constexpr ptr_bits_t PTR_BITS_XOR = 0x5C87DCF7UL;
#endif

	enum {
		cInvalidIndex = -1
	};

	inline constexpr uint cIntBits = sizeof(uint) * CHAR_BIT;

	template<typename T> struct int_traits {
		static constexpr T cMin = ::std::numeric_limits<T>::min();
		static constexpr T cMax = ::std::numeric_limits<T>::max();
		static constexpr bool cSigned = ::std::numeric_limits<T>::is_signed;
	};

	struct empty_type {};

} // namespace lzham
