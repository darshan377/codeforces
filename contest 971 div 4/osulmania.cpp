
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the number of rows for this test case
        vector<int> result(n);  // To store the column indices

        // Reading each row and storing the column index of '#'
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;  // Read the row string
            for (int j = 0; j < 4; j++) {
                if (row[j] == '#') {
                    result[n - 1 - i] = j + 1;  // Store 1-based index in reverse order
                    break;
                }
            }
        }

        // Output the results for this test case
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
