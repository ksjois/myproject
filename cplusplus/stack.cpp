#include <iostream>
#include <cassert>
#define STACK_SIZE 100
using namespace std;

//definiing a class fro stack
class stack {
  private:
  int count; // number of elements in the stack
  int data[STACK_SIZE]; //the items in stack
  public:
  //initialize the stack
   stack();
  //push the item into the stack
  void push(const int item);
  // remove  the item out of the stack
  int pop();
  //destroy the object
  ~stack();
};
  
  int main() {
    
    stack a_stack;
    //push items into stack
    a_stack.push(7);
    a_stack.push(4);
    cout << "Expect a 4->" << a_stack.pop()<<"\n"<<endl;
    return 0;




}


inline  stack::stack() {
  count=0;

}


inline void stack::push(const int item) {
  
  assert((count>=0) && (count<= sizeof(data)/sizeof(data[0])));
	 data[count] = item;
	 ++count;
  
}

    inline int stack::pop() {
    --count;
    assert((count>=0) && (count<= sizeof(data)/sizeof(data[0])));
	   return data[count];
    
  }

inline stack::~stack() {
  
}
