#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
    int input();
};
int date ::input()
{
  cout<<"Enter your birth day\n";
  cin>>day;
  cout <<"Enter your birth month\n";
  cin>>month;
  cout<<"Enter your birth year\n";
  cin>>year;
}
int main()
{
    date y1;
    y1.input();
    cout<<"yoour date of birth is: ";
    return 0;
}