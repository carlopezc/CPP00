# 🚀 CPP Module 00

> The first module of the 42 C++ curriculum, focused on the transition from C to C++ and basic OOP concepts.

---

## 🎯 Project Goals

This module serves as the bridge from C to C++. The primary goal is to understand the fundamental differences in syntax and to introduce the core concepts of **Object-Oriented Programming (OOP)**. It focuses on **classes**, **encapsulation**, and the new ways C++ handles memory and data.

## 🛠️ Technical Details

* **Namespaces:** Learning to use `std::` and understanding why namespaces exist.
* **Classes & Instances:** Defining simple classes, which act as blueprints for objects.
* **Encapsulation:** Using the `public:` and `private:` keywords to control access to member functions and attributes.
* **Constructors & Destructors:** Implementing special member functions that are called automatically when an object is created (constructor) or destroyed (destructor).
* **The `this` Pointer:** Understanding how member functions access the specific object instance they were called on.
* **Memory Allocation:** Using the `new` and `delete` keywords for heap allocation, replacing C's `malloc` and `free`.
* **References:** Using C++ references (`&`) as a safer, non-nullable alternative to pointers for aliasing variables.

## ⚙️ How to Compile & Run

This project contains a separate `Makefile` inside each exercise directory (e.g., `ex00/`, `ex01/`).

1.  Clone the repository:
    ```bash
    git clone [https://github.com/carlopezc/CPP00.git](https://github.com/carlopezc/CPP00.git)
    cd CPP00
    ```
2.  To compile and run a specific exercise, navigate into its folder:

    **Example (ex00):**
    ```bash
    cd ex00
    make
    ./megaphone "shhhhh... I'm testing"
    cd ..
    ```

    **Example (ex01):**
    ```bash
    cd ex01
    make
    ./ex01
    cd ..
    ```
