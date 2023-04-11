/*
Access control
Access	        public	protected	private
Same class	      yes	    yes	      yes
Derived classes	  yes	    yes	      no
Outside classes	  yes	    no	      no

A derived class inherits all base class methods with the following exceptions −
- Constructors, destructors and copy constructors of the base class.
- Overloaded operators of the base class.
- The friend functions of the base class.


type of inheritance
public Inheritance − When deriving a class from a public base class, 
        public members of the base class become public members of the derived class and 
        protected members of the base class become protected members of the derived class. 
        A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

Protected Inheritance − When deriving from a protected base class, 
        public and protected members of the base class become protected members of the derived class.

Private Inheritance − When deriving from a private base class, 
        public and protected members of the base class become private members of the derived class.

Mulitple inheritance
class derived-class: access baseA, access baseB....
*/
