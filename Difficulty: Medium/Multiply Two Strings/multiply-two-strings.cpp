class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {
        // Step 1: Handle signs
        bool isNegative = false;

        if (s1[0] == '-') {
            isNegative = !isNegative;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            isNegative = !isNegative;
            s2 = s2.substr(1);
        }

        int n = s1.size();
        int m = s2.size();

        // Step 2: Edge cases with zero string
        if (n == 0 || m == 0) return "0";

        vector<int> res(n + m, 0);

        // Step 3: Positional multiplication
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + res[i + j + 1];

                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        // Step 4: Skip leading zeros
        int i = 0;
        while (i < res.size() && res[i] == 0) {
            i++;
        }

        // If result is entirely 0
        if (i == res.size()) return "0";

        // Step 5: Construct result string
        string result = "";
        while (i < res.size()) {
            result.push_back(res[i] + '0');
            i++;
        }

        return isNegative ? "-" + result : result;
    }
};