# Competitive Programming

Solutions to competitive programming problems.

## Structure

- `codeforces/contests/` - contest solutions (one folder per contest)
- `codeforces/problemset/` - individual practice problems (`<id><letter>_<slug>.cpp`)
- `template.cpp` - starting template (fast I/O, multi-testcase loop)

## Compiling

```sh
g++ -std=c++20 -O2 solution.cpp -o solution
```

Solutions use GCC extensions (`<bits/stdc++.h>`), so GCC is required.
On macOS the default `g++` is Apple Clang - use Homebrew's `g++-15` instead.
