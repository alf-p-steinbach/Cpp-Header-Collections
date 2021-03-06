# C++ Header Collections

Convenience headers for including the most used stuff from the C++ standard library.

The **<cpp/all.hpp>** header is much like the g++ compiler’s `<bits/stdc++.h>` wrapper header, or Bjarne Stroustrup’s `<std_lib_facilities.h>` for his “Programming: Principles and Practice using C++” book. g++’s `<bits/stdc++.h>` includes everything in the standard library; Bjarne’ `<std_lib_facilities.h>` includes just a few select headers needed in beginner’s programs; this library’s <cpp/all.hpp> is somewhere in the middle: not everything  (only the compiler vendor can provide that!), but just about everything commonly used in professional code, including threading support.

The wrapper headers are all directly in the “cpp” folder and can be included separately, but their includes of each other form a small hierarhcy:

~~~txt
──all.hpp
  ├───all-except-io.hpp
  │   ├───calc.hpp
  │   ├───general-c-headers.cpp
  │   └───general-cpp-headers.hpp
  └───io.hpp
──FOLDER assert
  ├───is-c++17-or-later.hpp
  └───utf8-is-the-execution-character-set.hpp
~~~
