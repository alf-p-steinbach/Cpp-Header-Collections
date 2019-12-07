#pragma once    // Source encoding: UTF-8 with BOM (π is a lowercase Greek "pi").

// C++-specific headers. These are the non-calc-or-io-related, + <algorithm> again.
#include <algorithm>            // std:(sort, ...)
#include <array>                // std::(array)
#include <atomic>               // - atomic operations support for threading
#include <chrono>               // std::chrono::*
#include <condition_variable>   // std::condition_variable
#include <deque>                // std::deque (e.g. default container for std::stack)
#include <functional>           // std::(function)
#include <initializer_list>     // std::initializer_list
#include <iosfwd>               // - Forward declarations of stream types etc.
#include <iterator>             // std::(begin, end, size)
#include <map>                  // std::map
#include <memory>               // std::(unique_ptr, shared_ptr, ...)
#include <mutex>                // std::(mutex, lock_guard) etc.
#include <optional>             // std::optional
#include <queue>                // std::queue
#include <set>                  // std::set
#include <stack>                // std::stack
#include <stdexcept>            // std::(...). But see <@/failure-handling/macro-fail.hpp>.
#include <string>               // std::string
#include <string_view>          // - But see <@/text/String_view_.hpp>.
#include <thread>               // std::thread, std::this_thread::sleep_for
#include <unordered_map>        // - But see <@/collections/Map_.hpp>
#include <unordered_set>        // - But see <@/collections/Set_.hpp>
#include <utility>              // std::(forward, move), std::rel_ops::*
#include <variant>              // std::variant
#include <vector>               // std::vector
