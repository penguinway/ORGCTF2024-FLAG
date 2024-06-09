#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int jump(vector<int> &nums){
    int answer = 0;
    int start = 0;
    int end = 1;
    while(end < nums.size()){
        int farthest = 0;
        for(int i = start; i < end; i++){
            farthest = max(farthest, i + nums[i]);
        }
        start = end;
        end = farthest + 1;
        answer++;
    }
    return answer;
}
int jump_new(vector<int> &nums){
    int answer = 0;
    int start = 0;
    int end = 1;
    int farthest = 0;
    for (int i = 0 ;i < nums.size() - 1; i++){
        farthest = max(farthest, i + nums[i]);
        if (i == end){
            end = farthest;
            answer++;
        }
    }
   return answer;
}