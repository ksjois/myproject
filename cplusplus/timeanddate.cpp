#include<iostream>
#include<sstream>

using namespace std;

 struct date_time_conv {
   int hour,min,sec;
 };

double time_in_min(const struct date_time_conv& t1, const struct date_time_conv& t2);

int main() {
  struct date_time_conv t_first;
  struct date_time_conv t_next;
   t_first = {3,30,45};
   t_next =  {2,45,70};
   cout << time_in_min(t_first,t_next)<<"\n"<<endl;
  return 0;
    }
double time_in_min(const struct date_time_conv& t1, const struct date_time_conv& t2) {
 
  int diff = ((t1.hour-t2.hour)*60 + (t1.min - t2.min) + (t1.sec-t2.sec)/60);
    return diff;
  
}

    
