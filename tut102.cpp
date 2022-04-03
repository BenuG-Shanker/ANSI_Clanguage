/*
Inheritance (challenging topic in C++ as compare to other programming languages)
Overview :
    - reusability is a very miportant feature of OOP's.
    = we can reuse a class and add aditional features to it.
    = reusing classes save time and money.
    - reusing already tested and debuggedclass will save a lot of effort of developing and debugging the same thing again.
What is Inheritance in C++ :
    - The concept of Reusability in C++ is supported using Inheritance.
    - We can reuse the properties of an existing class by inheriting from it.
    - existing class is called as the BASE CLASS.
    - new class which is inherited is called as the DERIVED CLASS.
    - reusing classes saves time and money.
    - there are different types of inheritancein C++ :\
        > Single Inheritance :
            - A DERIVED CLASS with only one BASE CLASS 
            base class              derived class
            +-------+               +--------+
            |   A   |    ----->     |   B    |
            +-------+               +--------+
        > Multiple Inheritance :
            - A DERIVED CLASS with more than one BASE CLASS
            base class
            +--------+
            |   B    |                     derived class
            +--------+        ----->       +-------+
                                           |   C   |
            +--------+        ----->       +-------+
            |   A    |
            +--------+      
            base class
        > Hierarchical Inheritance :
            - Several DERIVED CLASSES from a single BASE CLASS
                                             derived class
                                             +--------+
            base class                       |   B    |                     
            +-------+          ----->        +--------+
            |   C   |
            +-------+          ----->        +--------+
                                             |   A    |
                                             +--------+      
                                             derived class
        > Multilevel Inheritance :
            - Deriving a class from already DERIVED CLASS
            +-------+                   +-------+                   +-------+
            |   A   |       ----->      |   B   |       ----->      |   C   |
            +-------+                   +-------+                   +-------+
        > Hybrid Inheritance :
            - Is a combination of multiple inheritance and multilevel inheritance.
            - A class is derived from two classes as in multiple inheritance.
            - One of the parent classes is not a base class.
                                             derived class
                                             +--------+
            base class                       |   B    |                  derived class                    
            +-------+          ----->        +--------+     ----->       +-------+
            |   A   |                                                    |   D   |
            +-------+          ----->        +--------+     ----->       +-------+
                                             |   C    |
                                             +--------+      
                                             derived class
*/