# CPP Michroarquitecture & Performance Lab

“There are only two kinds of languages: the ones people complain about and the ones nobody uses.” ― Bjarne Stroustrup.

Proyecto: C++ Microarchitecture & Performance Lab
​
This is a collection of experiments and practical examples on modern C++ as it relates to performance, microarchitecture, concurrency, and data design. This isn't a course on how to learn to program in C++ (there are excellent resources for that here on GitHub), but rather a set of notes on the more “obscure” aspects of C++—the ones that are often the hardest to grasp.

I’ve tried to include examples and performance metrics, because “a speedup is worth a thousand words.”

### Why this matters?

In modern computing, the bottleneck is no longer the CPU speed, but the memory latency. This repository is dedicated to writing code that is "a hardware aware approach", using C++20/23 features to achieve high performance.

Learning C++ is hard. I’ve been through it (and of course, I still am). But nowadays you can make progress easier: thanks to tools like clang-xeus, you can have interactive Jupyter Notebooks in the Python style for C++. It’s like reading a book and watching the example code run as you turn the pages!

A word of advice? Try it out, write your own examples, break things, make mistakes: nothing beats the experience of banging your head against the C++ compiler while trying to decipher the gibberish it spits out when something goes wrong. But if you’re the type who likes to “dig deep,” C++ is the right place for you.

I wish you the best of luck on your journey!

### 📓 1 — Memory and Property Management 
- 1.1 Stack vs Heap: when avoid ```new```
- 1.2 RAII: secure acquisition and release of resources
- 1.3 Move Semantics: L-values, R-values, ```std::move```.
- 1.4 RVO/NRVO: the ```return``` object.

### 📓 2 — Zero-Cost Abstractions and Views 
- 2.1 ```std::array``` vs C arrays
- 2.2 ```std::vector``` optimization: ```reserve```, ```emplace_back```.
- 2.3 ```std::string_view``` and ```std::span```.
- 2.4 ```std::mdspan``` (C++23) and contiguous access.

### 📓 3 — Data and Cache Architecture (DOD) 
- 3.1 Reference locality and cache hierarchy
- 3.2 Alignment: ```alignas```, ```alignof```.
- 3.3 False sharing and padding
- 3.4 SoA vs. AoS

### 📓 4 — Metaprogramming with Templates
- 4.1 Specialization
- 4.2 Variadic templates
- 4.3 Perfect forwarding
- 4.4 CRTP

### 📓 5 - Compile-Time Evaluation 
- 5.1 ```constexpr```
- 5.2 ```if constexpr```
- 5.3 ```consteval``` and ```constinit```
- 5.4 Fold expressions

### 📓 6 — Concepts and Constraints (C++20) 
- 6.1 From SFINAE to Concepts
- 6.2 Defining Concepts
- 6.3 requires
- 6.4 Improving Error Messages

### 📓 7 — Low-Level Concurrency 
- 7.1 std::atomic and CAS
- 7.2 Memory model: memory_order
- 7.3 Memory barriers
- 7.4 Coroutines (co_await)

### 📓 8 — Microarchitecture Optimization 
- 8.1 Branch Prediction
- 8.2 SIMD (SSE/AVX)
- 8.3 De-virtualization
- 8.4 Modern Features
