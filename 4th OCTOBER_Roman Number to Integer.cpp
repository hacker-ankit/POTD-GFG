//  AUTHOR Name : ANKIT KUMAR 
//  Date:03/10/23
//  Department : Computer Science And Engineering
// Jalpaiguri Government engineering College

class Solution {
  public:
  
   // code here
    int romanToDecimal(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prevValue = 0; // To keep track of the previous value to handle subtractive notation

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = romanValues[s[i]];

        // If the current value is less than the previous value, subtract it
        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }

        prevValue = currentValue;
    }

    return result;
        
    }
};
