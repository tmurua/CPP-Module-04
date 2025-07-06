# CPP-Module-04

This repository contains solutions for Module 04, implementing polymorphism, composition, and abstract classes in C++98. Each exercise builds upon the previous, culminating in a robust inheritance hierarchy and proper resource management. Below is an overview of each exercise.

---

## ex:00 – Polymorphism

**Files:** Makefile, `Animal.hpp`/`Animal.cpp`, `Dog.hpp`/`Dog.cpp`, `Cat.hpp`/`Cat.cpp`, `WrongAnimal.hpp`/`WrongAnimal.cpp`, `WrongCat.hpp`/`WrongCat.cpp`, `main.cpp`

**Plan**
1. **Base Class (`Animal`):**
   - Protected `std::string type` field.
   - Virtual destructor and `makeSound()` to enable dynamic binding.
2. **Derived Classes:**
   - `Dog`: sets `type = "Dog"`, overrides `makeSound()` to print `Woof!`.
   - `Cat`: sets `type = "Cat"`, overrides `makeSound()` to print `Meow!`.
3. **Incorrect Polymorphism:**
   - `WrongAnimal`: no virtual `makeSound()`.
   - `WrongCat`: inherits from `WrongAnimal` and attempts to override but demonstrates static binding.
4. **Testing:**
   - `main.cpp` creates `Animal*` pointing to `Dog`/`Cat`, prints `getType()` and calls `makeSound()`.
   - Creates `WrongAnimal*` pointing to `WrongCat` to show incorrect behavior.

**Lessons Learned**
- Virtual functions enable **runtime polymorphism**.
- Importance of **virtual destructors** in base classes.
- Difference between **static** and **dynamic binding**.

---

## ex:01 – I Don’t Want to Set the World on Fire

**Files:** Add `Brain.hpp`/`Brain.cpp`; updated `Dog.hpp`/`Dog.cpp`, `Cat.hpp`/`Cat.cpp`; `main.cpp`

**Plan**
1. **`Brain` Class:**
   - `std::string ideas[100]` array.
   - Deep-copy copy constructor and assignment operator.
2. **Composition:**
   - `Dog` and `Cat` hold a `Brain* brain`, allocated in constructor and deleted in destructor.
3. **Deep Copy Semantics:**
   - Copy constructor and assignment operator perform a **deep copy** of the `Brain` object.
4. **Testing:**
   - Create an array of `Animal*`, half `Dog`, half `Cat`.
   - Copy a `Dog` and verify that modifying the original’s `Brain` does not affect the copy.
   - Delete all objects and ensure proper destructor chaining and no memory leaks.

**Lessons Learned**
- Composition with **dynamic memory**.
- Implementing **rule of three** for deep copy safety.
- Verifying **memory leak prevention** and destructor order.

---

## ex:02 – Abstract Class

**Files:** Same as previous exercises.

**Plan**
1. **Make `Animal` Abstract:**
   - Declare `makeSound()` as a **pure virtual** function.
   - Prevent instantiation of `Animal` directly.
2. **Derived Classes:**
   - `Dog` and `Cat` must implement `makeSound()`, remaining instantiable.
   - `WrongAnimal` and `WrongCat` remain unchanged to demonstrate non-abstract behavior.
3. **Testing:**
   - Update `main.cpp` to only create `Dog`, `Cat`, `WrongAnimal`, and `WrongCat` instances.
   - Confirm that attempting to instantiate `Animal` is disallowed.

**Lessons Learned**
- Defining **abstract base classes** with pure virtual methods.
- Enforcing interfaces in derived classes.
- Ensuring **interface contracts** and compile-time safety.

---

## Final Thoughts

Module 04 reinforced:
- **Dynamic binding** via virtual functions and destructors.
- **Composition** and **deep copying** for resource management.
- Designing **abstract interfaces** to prevent misuse.
- Building layered, testable class hierarchies in C++98.

All code compiles under:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

and has been tested to satisfy the requirements of each exercise.

