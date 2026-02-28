# Fibonacci Complexity Table (Recursive vs Iterative vs Binet)

A small C++ console program that prints a table for Fibonacci numbers and compares the **theoretical number of operations** (calls/iterations) for three approaches:

- **Recursive Fibonacci (naive recursion)** – shows the *theoretical* number of recursive calls  
- **Iterative Fibonacci** – counts iterations as `n`  
- **Binet / Fast method (log2 steps estimate)** – estimates steps as `⌊log2(n)⌋ + 1`

The program computes `F(n)` (using an iterative method to avoid overflow/slow recursion) and prints values for **n = 5..45 (step 5)**.

---

## Output (Table Columns)

| Column | Meaning |
|-------|---------|
| `n` | Fibonacci index |
| `Fibonacci(n)` | Value of F(n) computed iteratively |
| `Apeluri Recursiv` | Theoretical number of recursive calls for naive recursion: `T(n) = 2 * F(n+1) - 1` |
| `Iterativ (iterații)` | Iteration count for iterative Fibonacci: `n` |
| `Binet (iterații)` | Estimated iterations for a logarithmic method: `⌊log2(n)⌋ + 1` |

---

## How it works

### 1) Fibonacci value (iterative)
Uses an iterative loop to compute the real Fibonacci value efficiently (no recursion).

### 2) Recursive calls formula
Instead of actually running the slow recursive Fibonacci, it prints the **theoretical call count**:
\[
T(n) = 2 \cdot F(n+1) - 1
\]
This matches the growth pattern of naive recursion (exponential).

### 3) Iterative steps
Iterative method is linear:
\[
O(n)
\]

### 4) Binet / fast method steps (estimate)
A logarithmic approach (like fast doubling) typically needs about:
\[
\lfloor \log_2(n) \rfloor + 1
\]
So we print that as the number of iterations.

---


[LL1_APA    Chiochiu Vladislav  .docx](https://github.com/user-attachments/files/25639672/LL1_APA.Chiochiu.Vladislav.docx)


## Build & Run

### Compile (g++)
```bash
g++ -std=c++17 -O2 -Wall -Wextra main.cpp -o fib_table


