 
# OOSD(CS3003)-Mid Sem Exam, Oct-2021


Q 1 of 82.
Consider a system where a heat sensor detects an intrusion and alerts the security company. What kind of a requirement the system is providing?
(1 Point)
  Non-Functional
  Functional
  Known Requirement
  Quality Requirement
  None of the mentioned



Q 2 of 82.
Exceptions are called by variety of exceptional circumstance:
(1 Point)
  Running out of memory
  Not being able to open a file
  Able to open the file
  Trying to initialize an object to an impossible value
  Using an out-of-bounds index to a vector



Q 3 of 82.
The waterfall model of software development is
(0.5 Points)
  A good approach when a working program is required quickly
  A reasonable approach when requirements are well defined
  The best approach to use for projects with large development teams
  An old fashioned model that is rarely used any more
  None of the above



Q 4 of 82.
Which of the following definition is incorrect for polymorphism?
(0.5 Points)
  Polymorphism helps in redefining the same functionality
  Polymorphism concept is the feature of object-oriented programming (OOP)
  It always increases the overhead of function definition
  Ease in the readability of the program



Q 5 of 82.
Consider the code snippet shown on right side of box. What is the second line of output of this program? If following code is inserted at line no. 25:   p=&d2;   p->vfunc();
(1 Point)

  Welcome to Derived2
  Welcome to derived1
  Welcome to derived2
  Welcome to Derived1
  Run time error



Q 6 of 82.
Which among the following is correct for the class defined in right box?
(1 Point)

  Object s3, syntax error
  Only object s1 and s2 will be created
  Program gives the output 100
  Program will give compile time error



Q 7 of 82.
Consider the following code: #include using namespace std; class loc { int longitude, latitude; public: loc() {} loc(int lg, int lt) { longitude = lg; latitude = lt; } void show() { cout << longitude << " "; cout << latitude << " "; } loc operator+(loc op2); loc operator-(loc op2); loc operator=(loc op2); loc operator++(); }; loc loc::operator+(loc op2) { loc temp; temp.longitude = op2.longitude + longitude; temp.latitude = op2.latitude + latitude; return temp; } // Overload - for loc. loc loc::operator-(loc op2) { loc temp; // notice order of operands temp.longitude = longitude - op2.longitude; temp.latitude = latitude - op2.latitude; return temp; } // Overload asignment for loc. loc loc::operator=(loc op2) { longitude = op2.longitude; latitude = op2.latitude; return *this; } // Overload prefix ++ for loc. loc loc::++operator() { longitude++; latitude++; return *this; } int main() { loc ob1(50, 60), ob2( 70, 80), ob3(90, 100); ob1=ob2-ob1; ob1.show(); ob1 = ob2 = ob3; ++ob1; ob1.show(); return 0; } Correct the typo error and then predict the output after rectifying the typo error. Write the complete line of corrected syntax in the exact format of syntax (Don't use any unnecessary space) and then comma (",") followed by output. Don't use any space before and after comma in the answer. For example, write abc xyz,20 30 40 where abc is the corrected syntax and complete  code of that line is abc xyz; 20 30 40 is the predicted output after rectifying the code.
(1 Point)
loc loc::operator++(), 20 20 91 101



Q 8 of 82.
Choose the Correct statements.
(0.5 Points)
  A pure virtual function is a virtual function that has no definition within the base class
  A pure virtual function is a virtual function that has at most one definition within the base class
  A class that contains at least one pure virtual function is said to be abstract
  Virtual functions implement the "one interface, multiple methods"
  The derived class redefines the virtual function to fit its own needs



Q 9 of 82.
Consider the following program. Predict the output and write what type of Inheritance is used. #include using namespace std; class base { public: int i; }; class derived1: virtual public base { public: int j; }; class derived2: virtual public base { public: int k; }; class derived3:public derived1, public derived2 { public: int sum; }; int main () { derived3 ob; ob.i = 10; ob.j = 20; ob.k = 30; ob.sum = ob.i + ob.j + ob.k; cout << ob.j << " " << ob.k << " "; cout << ob.sum; return 0; }
(1 Point)
  20 30 60, Only Multiple Inheritance
  20 30 60, Only Multilevel Inheritance
  10 30 60, Hybrid Inheritance
  20 30 60, Hybrid Inheritance
  10 30 60, Multilevel Inheritance and Multiple Inheritance



Q 10 of 82.
Select the properties of a good SRS document
(0.5 Points)
  Complete
  Consistent
  Traceable
  Verifiable



Q 11 of 82.
A DFD is levelled by
(1 Point)
  Merging a number of simple processes in a DFD into a complex processes in a new DFD
  Examining complex processes in a DFD and expanding them into new DFDs with more processes which are easy to understand
  Expanding the functions of a number of external entities into simpler functions
  Splitting a number of data flows into simpler data flows 



Q 12 of 82.
Which among the following is not a member of the class?
(0.5 Points)
  Virtual function
  const function
  Static function
  Friend function



Q 13 of 82.
Which of the following is a mechanism that allows several objects in an class hierarchy to have different methods with the same name?
(0.5 Points)
  Aggregation
  Polymorphism
  Inheritance
  All of the mentioned



Q 14 of 82.
Choose the correct statements
(1 Point)
  Method Overriding is a perfect example of dynamic binding
  Method Overriding is a perfect example of static binding
  The method definition and method call are linked during the run time in method overriding
  The method definition and method call are linked during the compile time in method overriding



Q 15 of 82.
Which are the attributes of a good software?
(1 Point)
  Usability
  Non-extensibility
  Security
  Non-availability
  Productivity



Q 16 of 82.
Consider the code snippet shown on right side of box. What are the part of output after adding following code?  int main() {  cout << "Start\n";  Xhandler(0);  Xhandler(1);  Xhandler(2);  cout << "End";  return 0; }
(1 Point)

  Start
  Caught an integer
  Caught Character
  Caught character
  Caught one!
  End



Q 17 of 82.
Which of the following is a disadvantage of OOD ?
(0.5 Points)
  Easier maintenance
  Objects may be understood as stand-alone entities
  Objects are potentially reusable components
  None of the mentioned



Q 18 of 82.
How is generalization implemented in Object Oriented programming languages using ________?
(0.5 Points)
  Inheritance
  Polymorphism
  Encapsulation
  Abstract Classes



Q 19 of 82.
Which of the following points related to Object-oriented development (OOD) is true?
(0.5 Points)
  OOA is concerned with developing an object model of the application domain
  OOD is concerned with developing an object-oriented system model to implement requirements
  Both mentioned
  None of the mentioned



Q 20 of 82.
Choose the incorrect statement in terms of Objects.
  Objects are abstractions of real-world
  Objects can’t manage themselves
  Objects encapsulate state and representation information
  All of the mentioned



Q 21 of 82.
Which are the example of early binding
(1 Point)
  Function overloading
  Function Overriding
  Operator overloading
  Virtual function



Q 22 of 82.
Choose the correct statements.
(1 Point)
  Structured analysis is typically carried out by using DFD and Data Dictionary
  Structured design is typically carried out by using State Transition diagram and ER diagram
  Structured design uses Structure Chart
  Structured analysis is typically carried out by using State Transition diagram and ER diagram
  Structured analysis uses Structure Chart



Q 23 of 82.
Choose the correct statements
(0.5 Points)
  An aggregation is a stronger form of relationship where the relationship is between a whole and its parts
  A dependency relationship is a stronger form of relationship
  An aggregation is a weaker form of relationship
  A dependency relationship is a weaker form of relationship



Q 24 of 82.
Which object will be created first? Consider the following code:
(1 Point)
  s3
  s2
  s1
  all are created at same time



Q 25 of 82.
If class C inherits class B. And B has inherited class A. Then while creating the object of class C, what will be the sequence of constructors getting called?
(1 Point)
  Constructor of C then B, finally of A
  Constructor of A then C, finally of B
  Constructor of A then B, finally C
  Constructor of C then A, finally B
  None of these



Q 26 of 82.
Choose the correct statements.
(0.5 Points)
  Validation begins as soon as the project starts
  Verification can begin only after a specification has been accepted
  Verification and validation are independent of each other
  Verification and validation are dependent to each other



Q 27 of 82.
In multiple inheritance, if class C inherits two classes A and B as follows, which class constructor will be called first?
(1 Point)
  B()
  A()
  C()
  Can’t be determined



Q 28 of 82.
Consider the code snippet shown on right side of box. What is the output of this program? 
(1 Point)

  Hello World
  Welcome to derived1
  Welcome to derived2
  Run time error



Q 29 of 82.
Which among the following is correct for the class defined in right box?
(1 Point)

  Object s3, syntax error
  Only object s1 and s2 will be created
  Program runs and all objects are created
  Program will give compile time error



Q 30 of 82.
Which generic activity in all software processes defines "changing the software in response to changing demands"?
(0.5 Points)
  Specification
  Development
  Validation
  Evolution



Q 31 of 82.
What is the typical relationship between coupling and cohesion?
(0.5 Points)
  There is no relationship between coupling and cohesion.
  As cohesion increases, coupling increases.
  As cohesion increases, coupling decreases
  Both are used to measure the quality of software design



Q 32 of 82.
If every requirement stated in the Software Requirement Specification(SRS) has only one interpretation,    SRS is said to be _____?
(0.5 Points)
  Correct
  Unambiguous
  Verifiable
  Consistent



Q 33 of 82.
What encapsulates both data and data manipulation functions ?
  Object
  Class
  Super Class
  Sub Class



Q 34 of 82.
To keep the software product up-to date is known by
(1 Point)
  Corrective Maintenance 
  Adaptive Maintenance
  Perfective Maintenance
  Preventive Maintenance



Q 35 of 82.
Function overloading starts execution at _____________
(0.5 Points)
  Compile time
  Run Time
  Both compile and run time
  None



Q 36 of 82.
Data flow in a DFD must have (i) An arrow showing direction of flow of data (ii) A meaningful name (iii) A label such as: xyz (iv) No arrows as they are confusing
(1 Point)
  i and iii
  ii and iv
  iii and iv
  i and ii



Q 37 of 82.
Object that collects data on request rather than autonomously is known as
(0.5 Points)
  Active Object
  Passive Object
  Multiple instance
  None of the mentioned



Q 38 of 82.
Which are the example of late binding
(1 Point)
  Function overloading
  Function Overriding
  Operator overloading
  Virtual function



Q 39 of 82.
How many types of constructors are available for use in general (with respect to parameters)?
(0.5 Points)
  2
  3
  4
  5



Q 40 of 82.
Select the correct statement with respect to Software Engineering
(0.5 Points)
  A Requirement gathering is to fully understand the user requirements.
  Requirement analysis is performed to remove inconsistencies, anomalies, etc. from requirements.
  Requirement specification is document requirements properly in an SRS document.
  Requirement review is used to further gathering and analysis of requirements.



Q 41 of 82.
Choose the correct statements in the context of DFD
(1 Point)
  No function specified in the SRS document should be overlooked
  Function specified in the SRS document should be overlooked
  A DFD model does not represent control information
  A DFD model represents control information
  Assume extra functionality of the system not specified by the SRS document



Q 42 of 82.
Which of the following is not an OOPS concept?
(0.5 Points)
  Encapsulation
  Polymorphism
  Exception
  Abstraction



Q 43 of 82.
Consider the code snippet shown on right side of box. What is the second line of output of this program? If following code is inserted at line no. 25:   p=&d2;   p=&d1;   p->vfunc();
(1 Point)

  Hello World
  Welcome to derived1
  Welcome to derived2
  Welcome to Derived1
  Run time error



Q 44 of 82.
Which one is not a relationship
(0.5 Points)
  Association
  Aggregation
  Identity
  Persistence



Q 45 of 82.
Choose the Incorrect statements.
(0.5 Points)
  A copy constructor is a member function which initializes an object using another object of the same class
  A copy constructor is a member function which initializes an object using same object of the another class
  A copy constructor is called when the compiler generates a temporary object
  A copy constructor helps to deallocate the memory of an object
  A copy constructor is called when an object of the class is returned by value and passed (to a function) by value as an argument



Q 46 of 82.
Consider the below code. Predict the output and write what property of object-oriented programming is used. #include using namespace std; class Display {     private:        int num;      public:             void set(int a)         {    num =a;   }                  int get( )         { return num;  } }; int main() {        Display obj;        int a=5;        obj.set(6);        cout<
(0.5 Points)
5, Data hiding5, Abstraction6, Encapsulation5, Encapsulation



Q 47 of 82.
To design a bicycle database with objects, it contains following objects(wheel, brake, gear). This property is known as _____________. Write the answer in capital letters.
(0.5 Points)



Q 48 of 82.
Consider a line of code: virtual void show() = 0;
(1 Point)
  Polymorphism
  Virtual function
  Pure virtual function
  Copy constructor



Q 49 of 82.
Which feature of OOPS described the reusability of code?
(0.5 Points)
  Abstraction
  Encapsulation
  Polymorphism
  Inheritance



Q 50 of 82.
Choose the correct statements in the context of DFD
(1 Point)
  All external entities should be represented in the context diagram
  Each bubble should be decomposed to exactly 3 or 7 bubbles
  External entities should not appear at any other level DFD
  All external entities should not be represented in the context diagram
  Each bubble should be decomposed  between 3 to 7 bubbles



Q 51 of 82.
Inherited object classes are self-contained.
(0.5 Points)
  True
  False



Q 52 of 82.
Which among the following is correct?
(1 Point)
  class student{ public: int student(){} };
  class student{ public: void student (){} };
  class student{ public: student{}{} };
  class student{ public: student(){} };



Q 53 of 82.
Which among the following is not a necessary condition for constructors?
(0.5 Points)
  Its name must be same as that of class
  It must not have any return type
  It must contain a definition body
  It can contains arguments



Q 54 of 82.
A means of system evaluation in terms of four quality measures are
(1 Point)
  Correspondence
  Correctness
  Verification
  Validation.
  None of these



Q 55 of 82.
An object that provides a generalized set of operations, all of which perform the same kind of function
(1 Point)
  Entity abstraction
  Action abstraction
  Virtual machine abstraction
  Coincidental abstraction



Q 56 of 82.
Consider the below code. Predict the output and write what type of Inheritance is used. #include using namespace std; class base { protected: int i, j; public: void set (int a, int b) { i = a; j = b; } void show () { cout << i << " " << j << " "; } }; class derived: public base { int k; public: // derived may access base's i and j void setk () { k = i * j; } void showk () { cout << k << "\n"; } }; int main () { derived ob; ob.set (5, 6); ob.show (); ob.setk (); ob.showk (); return 0; }
(1 Point)
  5 6 36, Simple Inheritance
  5 6 30, Multiple Inheritance
  5 6 25, Multiple Inheritance
  5 6 30, Simple Inheritance



Q 57 of 82.
Which of the following feature is also known as run-time binding or late binding?
(0.5 Points)
  Dynamic typing
  Dynamic loading
  Dynamic binding
  Data hiding



Q 58 of 82.
Choose the Incorrect statements
(1 Point)
  Hierarchy is a ranking or ordering of abstractions
  Object structure is known as “is a” hierarchy
  Class structure is known as  “is a” hierarchy
  Class structure is known as “part of” hierarchy
  Object structure is known as  “part of” hierarchy



Q 59 of 82.
Consider the code snippet shown on right side. Predict the output after adding following code: int main() {   loc ob1(11, 22), ob2( 35, 50), ob3(80, 100);   ++ob1;   ob2 = ob2- ++ob1;   ob2.show();    return 0; }
(1 Point)

  13 24
  22 26
  23 27
  Compile time error
  Run time error



Q 60 of 82.
Which member can never be accessed by inherited classes?
(0.5 Points)
  Private member function
  Public member function
  Protected member function
  All can be accessed



Q 61 of 82.
Choose the correct statements.
(1 Point)
  An object is an entity that has a state and a undefined set of operations
  The state is represented as a set of object attributes.
  Objects are created according to some object class definition. 
  An object class definition does not serve as a template for objects



Q 62 of 82.
Choose the correct statements.
(1 Point)
  Function-oriented or Procedural uses Top-down approach
  Function-oriented design is carried out using structured analysis and structured chart
  Object-oriented design is carried out using bottom-up approach
  Object-oriented design is carried out using top-down approach



Q 63 of 82.
The property by which an object continues to exist even after its creator ceases to exist is known by ________________
(0.5 Points)
  Object Containment
  Persistence
  Object Identity
  Constructor



Q 64 of 82.
If a class is derived from one class, which is already derived from another class then which type of Inheritance is used?
(0.5 Points)
  Multiple Inheritance
  Hybrid Inheritance
  Multilevel Inheritance
  Hierarchical Inheritance



Q 65 of 82.
Which one is not a software process model?
(1 Point)
  Evolutionary
  Prototyping
  Spiral model
  UML
  Agile models



Q 66 of 82.
Which feature of OOPS derives the class from another class?
(0.5 Points)
  Abstraction
  Encapsulation
  Inheritance
  Polymorphism



Q 67 of 82.
Choose the correct statements.
(1 Point)
  Modularization is the process of combining a program into modules
  Modularity is the property of a system that has been decomposed into a set of cohesive and tightly coupled modules
  Modularity is the property of a system that has been decomposed into a set of cohesive and loosely coupled modules
  Modularization consists of dividing a program into modules



Q 68 of 82.
Select the correct rules with respect to DFD
(0.5 Points)
  All data flows must contain data
  All data flows must begin and/or end at a process
  Data flowing into or out of a bubble, must match the data flows at the next level of DFD.
  None of the above



Q 69 of 82.
Choose the correct statements
(1 Point)
  Concurrency is the property that distinguishes an active object from one that is not active.
  Concurrency does not allow the mutual exclusion
  You must consider how active objects synchronize their activities with one another once concurrency is introduced into a system
  Concurrency allows the mutual exclusion



Q 70 of 82.
Objects are executed
(0.5 Points)
  sequentially
  in Parallel
  sequentially & Parallel
  none of the mentioned



Q 71 of 82.
What type of relationship can be represented by Shape class and Square where Shape class derives the Triangle class and square class?
(0.5 Points)
  Realization
  Generalization
  Aggregation
  Dependency



Q 72 of 82.
Consider the code snippet shown on right side. Predict the output after adding following code: int main() {   loc ob1(101, 202), ob2( 50, 60), ob3(95, 85);   ++ob2;   ob3 = ob3-ob2;   ++++ob3;   ob3.show();    return 0; }
(1 Point)

  46 26
  44 24
  45 25
  47 27
  Run time error



Q 73 of 82.
A mechanism that binds together code and the data it manipulates known by
(0.5 Points)
  Data Abstraction
  Encapsulation
  Data Hiding
  None



Q 74 of 82.
What should we have for a good software design?
(0.5 Points)
  High Cohesion
  Low Cohesion
  High Coupling
  Low Coupling



Q 75 of 82.
Which one represents the strongest relationship?
(0.5 Points)
  Association
  Composition
  Aggregation
  Dependency



Q 76 of 82.
Choose the correct statements.
(1 Point)
  A rectangular box represents a module
  The main focus of a structure chart is to provide interaction among different modules
  Modules in a structure chart should not be arranged in layers or levels
  The aim of structured design is to transform the results of structured analysis into a structure chart
  Not easily implementable using programming languages using structure chart representation



Q 77 of 82.
In DFD, decomposition of a bubble should be carried on until __________________
(1 Point)
  A level at which the function of the bubble can be described using a complex algorithm.
  A level at which the function of the bubble can be described using a simple algorithm.
  A level at which the process can be described using multiple algorithm.
  A level at which the process can be described using a single algorithm.



Q 78 of 82.
Which of the following describes ”IS-A-Relationship” ?
(0.5 Points)
  Aggregation
  Inheritance
  Dependency
  All of the mentioned



Q 79 of 82.
Which one is used to show the Inheritance property using graph?
(0.5 Points)
  Aggregation
  Dependency
  Generalization
  Association



Q 80 of 82.
Functional independence between module
(0.5 Points)
  Reduces error propagation
  Reuse of module is possible
  Decrease the level of abstraction
  Can be measured quantitatively using Fan-in and Fan-out factor



Q 81 of 82.
Composite data are defined in terms of primitive data items using simple operators in DFD. Choose the   correct statements with respect to DFD 
(1 Point)
  a+(b) represents either a or a+b
  a+b represents data a together with b
  [a,b] represents either a and b
  [a,b] represents either a occurs or b
  a+b represents data either a or b



Q 82 of 82.
Match the correct combination Relationship Definition R1:Aggregation (i.) IS-A R2:Composition (ii.) HAS-A R3:Inheritance (iii.) Whole/Part
(1 Point)
  R1-->(i.), R2-->(ii.), R3-->(iii.)
  R2-->(i.), R1-->(ii.), R3-->(iii.)
  R3-->(i.), R2-->(ii.), R1-->(iii.)
  R3-->(i.), R1-->(ii.), R2-->(iii.)


