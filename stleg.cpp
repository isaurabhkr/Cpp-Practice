#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
main (int argc, char *argv[])
{
 int n = atoi (argv[1]); // argument checking removed for clarity
 n =10;
 int nu;
  vector <int> v;
  for (int i = 0; i < n; i++)
        {cin>>nu;                         // append integers 0 to n-1 to v
    v.push_back (nu);}

  random_shuffle (v.begin(), v.end());                         // shuffle
  copy (v.begin(), v.end(), ostream_iterator<int> (cout, "\n")); // print
}
