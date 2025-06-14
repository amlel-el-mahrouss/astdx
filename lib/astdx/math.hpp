/*
 * File: math.hpp
 * Purpose: mathematics c++ header.
 * Author: Amlal El Mahrouss (amlal@nekernel.org)
 * Copyright 2025, Amlal El Mahrouss all rights reserved.
 */

#pragma once

#include <cmath>

namespace astdx::math
{
	template <size_t T>
	struct is_non_boolean_integer final
	{
		static constexpr const bool value = true;
	};

	template <>
	struct is_non_boolean_integer<false> final
	{
		static constexpr const bool value = false;
	};

	template <>
	struct is_non_boolean_integer<true> final
	{
		static constexpr const bool value = false;
	};

	constexpr inline auto not_a_number = NAN;
	constexpr inline auto positive_infinity = INFINITY;
	constexpr inline auto negative_infinity = -positive_infinity;
} // namespace astdx::math