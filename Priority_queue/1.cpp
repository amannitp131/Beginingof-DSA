#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // Use a max heap with a custom comparator
        auto comp = [](const pair<double, pair<int, int>>& a, const pair<double, pair<int, int>>& b) {
            return a.first < b.first;
        };
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, decltype(comp)> pq(comp);

        // Push initial values into the priority queue
        for (const auto& c : classes) {
            double gain = (double)(c[0] + 1) / (c[1] + 1) - (double)c[0] / c[1];
            pq.push({gain, {c[0], c[1]}});
        }

        // Distribute extra students
        while (extraStudents--) {
            auto top = pq.top();
            pq.pop();
            int pass = top.second.first;
            int total = top.second.second;
            pass++;
            total++;
            double newGain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({newGain, {pass, total}});
        }

        // Calculate the final average ratio
        double ans = 0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            ans += (double)top.second.first / top.second.second;
        }
        return ans / classes.size();
    }
};

int main() {
    Solution solution;

    // Example input
    vector<vector<int>> classes = {{1, 2}, {3, 5}, {2, 2}};
    int extraStudents = 2;

    // Call the function and print the result
    double result = solution.maxAverageRatio(classes, extraStudents);
    cout << "Maximum Average Ratio: " << result << endl;

    return 0;
}