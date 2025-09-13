# Experiment 14 : Inheritance in C++

## Aim
To study and implement different types of inheritance in C++:
- **14A** : Inheritance using Public, Private, and Protected Access Specifiers  
- **14B** : Multiple Inheritance  
- **14C** : Multilevel Inheritance  
- **14D** : Hierarchical Inheritance  
- **14E** : Single Inheritance  

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Inheritance in C++
- Inheritance is an object-oriented programming (OOP) feature that allows one class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class).  
- It promotes **reusability**, **modularity**, and **maintainability**.  

### Access Specifiers in Inheritance
- **Public**: Public members of base remain public in derived class.  
- **Private**: Public and protected members of base become private in derived class.  
- **Protected**: Public and protected members of base become protected in derived class.  

### Types of Inheritance
1. **Single Inheritance** – A class inherits from one base class.  
2. **Multiple Inheritance** – A class inherits from more than one base class.  
3. **Multilevel Inheritance** – A class is derived from another derived class, forming a chain.  
4. **Hierarchical Inheritance** – Multiple classes inherit from a single base class.  
5. **Hybrid Inheritance** – Combination of more than one type of inheritance.  

---

## Algorithm

### 14A: Inheritance with Public, Private, and Protected Classes
1. Start  
2. Create a base class with members under different access specifiers.  
3. Derive a class publicly, privately, and protectedly.  
4. Display accessibility of members in each case.  
5. End  

### 14B: Multiple Inheritance
1. Start  
2. Create two base classes with functions.  
3. Derive a single class from both base classes.  
4. Access functions of both base classes using the derived object.  
5. End  

### 14C: Multilevel Inheritance
1. Start  
2. Create a base class, derive a class from it, then derive another class from the second.  
3. Access members across all levels.  
4. Demonstrate data flow through the chain.  
5. End  

### 14D: Hierarchical Inheritance
1. Start  
2. Create a single base class.  
3. Derive two or more child classes from it.  
4. Show how each child can independently access base class members.  
5. End  

### 14E: Single Inheritance
1. Start  
2. Define one base class with members.  
3. Derive one class from it.  
4. Access base class members using derived class object.  
5. End  

---

## Functions
- Use of **class inheritance syntax**:  
  - `class Derived : public Base { ... }`  
  - `class Derived : private Base { ... }`  
  - `class Derived : protected Base { ... }`  
- Understanding function overriding in inheritance.  
- Using **scope resolution operator (::)** to access specific base functions.  

---

## Conclusion
Through this experiment, I learned how inheritance works in C++.  
I studied the difference between public, private, and protected inheritance.  
I also implemented multiple, multilevel, hierarchical, and single inheritance, which showed me how classes can be related and reused in different ways.  
This helped me understand the importance of inheritance in object-oriented programming for reusability and maintainability.
