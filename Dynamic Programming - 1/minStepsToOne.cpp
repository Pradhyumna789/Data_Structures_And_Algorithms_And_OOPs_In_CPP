#include <climits>

int countMinStepsToOne(int n) {

if (n <= 1) {

return 0;

}

int subtractOne = countMinStepsToOne(n - 1);

// If we initialize y and z with INT_MIN, then min(x, min(y, z)) = 0
int x = INT_MAX;
int y = INT_MAX;

if (n % 2 == 0) {

x = countMinStepsToOne(n / 2);

}

if (n % 3 == 0) {

y = countMinStepsToOne(n / 3);

}

int ans =  1 + min(x, min(y, z));

return ans;

}






