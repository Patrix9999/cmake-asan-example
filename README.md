# 🧪 cmake-asan-example

A minimal yet powerful CMake superproject that demonstrates how to use **MSVC AddressSanitizer (ASAN)** to detect memory bugs in a Windows environment.

This project includes:
- `exe`: A simple executable
- `dll`: A shared library loaded by the executable

Together, they showcase how dynamic linking works — and how ASAN can catch sneaky memory issues like buffer overflows, use-after-free, and more.

---

## 🚀 What It Does

This example shows how an executable can:
- Dynamically load a DLL
- Interact with its functions
- Detect memory violations at runtime using ASAN

Perfect for developers who want to integrate runtime memory checks into modular C++ projects.

---

## 🛡️ Powered by MSVC ASAN

We use [MSVC AddressSanitizer](https://learn.microsoft.com/en-us/cpp/sanitizers/asan?view=msvc-170), a fast and precise memory error detector built into Visual Studio.

ASAN helps catch:
- Heap and stack buffer overflows
- Use-after-free
- Memory leaks
- Invalid pointer dereferencing

---

## 📦 Required Runtime Libraries

To run the instrumented binaries, you’ll need the following ASAN runtime DLLs (included in this repo for convenience):

- `clang_rt.asan_dynamic-i386.dll`
- `clang_rt.asan_dynamic-x86_64.dll`

These are extracted from the [Microsoft Visual Studio SDK](https://visualstudio.microsoft.com/pl/). Without them, the program won’t launch.