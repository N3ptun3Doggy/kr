#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   int a, n, count1, summ;
   cout << "Put: ";
   cin >> n >> summ;
   vector <int> vector(n);
   for (int i = 0; i < n; i++){
        cin >> vector[i];
   }

   sort(vector.rbegin(), vector.rend());
   count1=0;
   for (int i=0;i<n;i++){
        a = vector[i];
        count1+=summ/a;
        summ%=a;
   }

   cout << "Output: " << count1;

   return 0;
}
