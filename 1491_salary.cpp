#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        double total=0;
        int max=salary[0],min=salary[0];
        for(int i=0;i<n;i++){
            if(salary[i]>max){
                max=salary[i];
            }
            if(salary[i]<min){
                min=salary[i];
            }
            
            total=total+salary[i];
        }
        
        total= total-max-min;
        return total/(n-2);
    }
};