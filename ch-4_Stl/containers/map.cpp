#include <iostream>
#include<unordered_map>
using namespace std;
int main (){
  unordered_map<string,string> table;
  // insert

  table["in"]="India";
  table.insert(make_pair("in","England"));
  cout<<table.at("in")<<endl;
  table.at("in")="Pakistan";
  cout<<table.at("in")<<endl;

}