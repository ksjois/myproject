#include <iostream>

using namespace std;

class checkbook {

  int amount;
  int total;
  int sum;

public:
  //initalize checkbook
   checkbook();
  //add amount to the existing amount
   void add_item(const int amount);
  //calculate the total amount for the checkbook
   int total_sum();
   ~checkbook();

};

inline checkbook:: checkbook() {
  amount = 0;
  sum = 0;
  }

inline void  checkbook::add_item(const int amount) {
  sum += amount;

}

int checkbook::total_sum() {
    total = sum;
    return total;
}

inline checkbook::~checkbook() {

}


int main() {

  checkbook money;
  money.add_item(10000);
  cout <<"amount on the check\t " << money.total_sum() << endl;
  money.add_item(500);
  money.add_item(-250);
  cout <<"amount on the check\t " << money.total_sum() << endl;

  return 0;

}
