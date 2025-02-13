#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid) {
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) { 
            return false;  
        }

        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            studentcount++;
            if (studentcount > m) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int n, int m) {
    if (m > n) {
        return -1; 
    }

    int sum = 0, maxPages = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxPages = max(maxPages, arr[i]); 
    }

    int s = maxPages, e = sum;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1; 
        }
    }
    return ans;
}

int main() {
    int arr[4] = {10, 20, 30, 40};
    int bookallocation = allocatebooks(arr, 4, 2);
    cout << "The minimum number of pages allocated to the students: " << bookallocation << endl;
    return 0;
}
