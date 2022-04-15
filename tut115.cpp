/*
Constructor in derived classes:
> we can use constructor in derived classes in c++.
> if base class constructor does not have any arguments, there is no need of ay constructor in derived class.
> but if there are one or more arguments in the base class constructor, derived class need to paas arguments to the base class constructor.
> if both base and derived classes have constructors, base class constructor is executed first.

Construstors in Multiple Inheritance:
> base classes are constructed in the order in which they appear in the class declaration.

Constructor in Multi Level Inheritance:
> constructor are executed in order of inheritance

Special Syntax:
> c++ supports it for passing arguments to multiple base classes.
> the constructor of derived class receives all the arguments at once and then will pass the calls to the respective base classes.
> the body is called after all the constructors are finished executing.
        Derived-construtor(arg1, arg2, arg3, ...) : Base I-constructor(arg1, arg2), Base II-constructor(arg3, arg4),Base III-constructor(arg5, arg6)
        C(a1, a2, b1, b2, c1, c2); a1, a2 are parameters of class A, b1, b2 are parameters of class B, c1, c2 are parameters of class C

Special case of virtual base class:
> the constructor for virtual base classes are invoke before an non virtual base class.
> if there are multiple virtual base classes, they are declared in order declared.'
> any non virtual base class are then constructed before the derived class constructed is executed.
*/