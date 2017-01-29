#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int max = arr[0][0] + arr[0][1] + arr[0][2]
                               + arr[1][1]
                + arr[2][0] + arr[2][1] + arr[2][2];
    int testMax;
    for(int k = 1; k < 5; k++){
        for(int l = 1; l < 5; l++){
            testMax = arr[k-1][l-1] + arr[k-1][l] + arr[k-1][l+1]
                                    + arr[k][l]
                        + arr[k+1][l-1] + arr[k+1][l] + arr[k+1][l+1];
            if(testMax > max){
                max = testMax;
            }
        }
    }
    
    cout << max;
}
