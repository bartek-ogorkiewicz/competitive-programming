# Competitive Programming

Solutions to competitive programming problems.

## Structure

- `codeforces/contests/` - contest solutions (one folder per contest)
- `codeforces/problemset/` - individual practice problems (`<id><letter>_<slug>.cpp`)
- `atcoder/contests/` - contest solutions (one folder per contest)
- `atcoder/problemset/` - individual practice problems
- `cses/` - CSES Problem Set solutions, organized by category as on the site
- `templates/` - starting templates (`default.cpp` for general use, `cses.cpp` for CSES)

## Links

- [Codeforces](https://codeforces.com/)
- [AtCoder](https://atcoder.jp/)
- [CSES Problem Set](https://cses.fi/problemset/)

## Compiling

```sh
g++ -std=c++20 -O2 solution.cpp -o solution
```

Solutions use GCC extensions (`<bits/stdc++.h>`), so GCC is required.
On macOS the default `g++` is Apple Clang - use Homebrew's `g++-15` instead.
