//  AUTHOR Name : ANKIT KUMAR 
//  Date:03/10/23
//  Department : Computer Science And Engineering
// Jalpaiguri Government engineering College

class Solution{
    public:
    string colName (long long int N)
    {
        // your code here
        string result = "";

    while (N > 0) {
        N--;                                             // Adjust N to start from 0
        char ch = 'A' + (N % 26);                       // Calculate the last character of the column name

        result = ch + result;                          // Prepend the character to the result
        N /= 26;                                      // Move to the next part of the column name
    }

    return result;
}

int main() {
    long long N;
    cin >> N;

    string columnName = colName(N);
    cout << columnName << endl;

    return 0;
    }
};
