#include <iostream>
using namespace std;

int main() {
    int n, h;
    cout << "Number of piles: ";
    cin >> n;
    cout << "Hours available: ";
    cin >> h;

    int piles[n];
    cout << "Bananas in each pile: ";
    for(int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    // Find the largest pile
    int end = piles[0];
    for(int i = 1; i < n; i++) {
        if(piles[i] > end)
            end = piles[i];
    }

    int start = 1;   // minimum speed
    int ans = end;   // initial answer

    while(start <= end) {
        int mid = start + (end - start) / 2; // current speed
        int total_hr = 0;

        // calculate total hours needed at this speed
        for(int i = 0; i < n; i++) {
            total_hr += (piles[i] + mid - 1) / mid; // ceil division
        }

        if(total_hr <= h) {  // speed is enough
            ans = mid;
            end = mid - 1;   // try smaller speed
        } else {             // speed too slow
            start = mid + 1; // try faster speed
        }
    }

    cout << "Minimum eating speed: " << ans << endl;

    return 0;
}
