question 1 :
What is the purpose of ‘delete’ operator?
  
int* ptr = new int;  // Allocate memory for an integer
delete ptr;  // Deallocate the memory when it's no longer needed

When you allocate memory dynamically using 'new', it's user responsibility to release that memory when it's no longer needed. 
If you don't, it can lead to memory leaks, which means that the program continues to use memory that is no longer reachable or usable.
  
question 2 :
  
Which members of the base class are visible in a derived class?

class Base {
public:
    int publicMem;
protected:
    int protectedMem;
private:
    int privateMem;
};

class Derived : public Base {
    // publicMem  we can access
    // protectedMem we can accessible (treated as if it were private)
    // privateMem we cannot access
};
