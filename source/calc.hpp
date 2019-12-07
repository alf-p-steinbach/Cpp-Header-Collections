#pragma once    // Source encoding: UTF-8 with BOM (π is a lowercase Greek "pi").
/// \file
/// \brief Just includes `<c/math.hpp>`, <c/inttypes.hpp>, `<complex>` and `<numeric>`,
/// where the first header provides Posix’ `M_PI` macro, as well as `M_E`, `M_LOG2E`,
/// `M_LOG10E`, `M_LN2`, `M_LN10`, `M_PI_2`, `M_PI_4`, `M_1_PI`,  `M_2_PI`, `M_2_SQRTPI`,
/// `M_SQRT2` and `M_SQRT1_2`.
///
/// In C++14 and earlier <c/stdlib.hpp> was needed for integral abs overloads.

#ifdef __GNUC__
#   include <cpp/compiler-workarounds/gnuc/gnuc-random-device-warning.hpp>
#endif

#include <c/math.hpp>       // Just <math.> + <cmath> (note: special funcs in C++17).
#include <c/stdlib.hpp>     // div
#include <c/inttypes.hpp>   // Even in C++17 needed for intmax_t abs and div overload.

#include <algorithm>        // std::(min, max, ...)
#include <complex>          // std::complex
#include <numeric>          // std::accumulate etc.
#include <random>           // std::(...)

// Intentionally not including <valarray> because it doesn't follow std library conventions.
