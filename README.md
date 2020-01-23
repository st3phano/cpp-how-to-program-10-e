Chapter 3:
-Class names begin with an initial uppercase letter, and member-function and data-member names begin with an initial lowercase letter.
-Place a class’s data members last in the class’s body.
-Headers should not contain using directives or using declarations.
-Declaring a member function with const to the right of the parameter list tells the compiler, 
“this function should not modify the object on which it’s called—if it does, please issue a compilation error.” 
-Making a class’s data members private and member functions public facilitates debugging
because problems with data manipulations are localized to the member functions.
