# Binary Search

A C++ implementation of the binary search algorithm that searches for elements in a **monotonically sorted** (ascending **or** descending) sequence of integers and returns the 0-based index of the found element, or `-1` if not found.

## Tech Stack

| Tool | Details |
|---|---|
| Language | C++ (standard I/O) |
| IDE / Build System | Visual Studio 2022 (`.sln` / `.vcxproj`) |
| Platform | Windows x86 / x64 (Debug & Release configurations) |

## Architecture

The project is a single-file console application (`Binary_Search.cpp`):

- Reads all input from `stdin` and writes all output to `stdout` — competitive-programming style.
- Supports **multiple test scenarios** in one run (controlled by the first input line).
- Auto-detects whether the sequence is ascending or descending by comparing the first two elements.
- Implements a classic **iterative binary search** loop, adjusting left/right bounds based on sort direction until the element is found or the search space is exhausted.

```
main()
 ├── read number of scenarios (m)
 └── for each scenario:
      ├── read sequence of n integers
      ├── read p query values
      ├── detect sort order (ascending / descending)
      └── for each query: run binary search → print index or -1
```

## Input / Output Format

### Input

```
m                          ← number of test scenarios
n                          ← number of elements in the sequence
e0 e1 ... en-1             ← the sequence (space-separated integers)
p                          ← number of elements to search for
k0 k1 ... kp-1             ← query values (space-separated)
```

*(Repeat the last three groups for each of the m scenarios.)*

### Output

One line per query value per scenario — the 0-based index of the element in the sequence, or `-1` if not found.

## Example

**Input**
```
3
5
5 4 3 2 1
1
5
10
1 2 4 8 16 32 64 128 256 512
2
128
129
5
-100 -50 -1 0 10000
1
-1
```

**Output**
```
0
7
-1
2
```

## How to Build & Run

### Using Visual Studio

1. Open `Binary_Search.sln` in Visual Studio 2022.
2. Select a configuration (`Debug` or `Release`) and platform (`x86` or `x64`).
3. Press **Ctrl+F5** (Run Without Debugging) to build and run.

### Using a C++ compiler on the command line

```bash
g++ -O2 -o binary_search Binary_Search.cpp
./binary_search < input.txt
```

Feed the input interactively or redirect from a file; results are printed to `stdout`.

## Constraints

- Maximum sequence length: **10 000** elements.
- Maximum number of queries per scenario: **10 000**.
- Element values: signed integers (supports negative numbers).
- The sequence **must** be strictly monotonic (all ascending or all descending); behaviour is undefined for non-monotonic sequences.
