#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<float> rainfall;
    float t;
    float m;
    float n;
    while (cin >> n) {
        rainfall.push_back(n);
    }
    if (!rainfall.size()) {
        cout << "Error: no rainfall data";
        return 1;
    }
    t = rainfall[0];
    m = rainfall[0];
    for (vector<float>::size_type i = 1; i < rainfall.size(); ++i) {
        t += rainfall[i];
        if (rainfall[i] > m)
            m = rainfall[i];
    }
    cout << "Average Hourly Rainfall: " << std::fixed << std::setprecision(2) << (t / rainfall.size()) << " hundreds of inches" << '\n';
    cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';
}
