# C++ Header Collections

Convenience headers for including the most used stuff from the C++ standard library.

The **<cpp/all.hpp>** header is much like the g++ compiler&rsquo;s `<bits/stdc++.h>` header, or Bjarne Stroutrup&rsquo;s `<std_lib_facilities.h>` for his &ldquo;Programming: Principles and Practice using C++&rdquo; book. g++&rsquo;s `<bits/stdc++.h>` includes everything in the standard library; Bjarne&rsquo; `<std_lib_facilities.h>` includes just a few select headers needed in beginner&rsquo;programs; this library&rsquo;s <cpp/all.hpp> is somewhere in the middle: not everything  (only the compiler vendor can provide that!), but just about everything commonly used in professional code, including threading support.

The headers are all directly in the &ldquo;cpp&rdquo; folder and can be included separately, but their includes of each other form a small hierarhcy:

~~~txt
all.hpp
├───all-except-io.hpp
│   ├───calc.hpp
│   ├───general-c-headers.cpp
│   └───general-cpp-headers.hpp
└───io.hpp
~~~
