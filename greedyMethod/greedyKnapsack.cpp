#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void greedyKnapsack(float p[], float w[]){
    float pi_wi[3];
    
    for(int i=0; i<3; i++){
            pi_wi[i]=p[i]/w[i];
    }
    
    int M = 20;
    int profit = 0;
    int i = 0;
    
    for(; i<3; i++) {
        if(M > 0 && w[i]<=M) {
            M = M - w[i];
            profit = profit + p[i];
        } 
        else break;
    }
    if(M>0)
        profit = profit + p[i]*(M/w[i]);

    cout<<"Maximum profit is : "<<profit<<endl;

}

int main(){
    float p[3] = {15,25, 24};
    float w[3] = {5,10, 15};

    greedyKnapsack(p,w);

    return 0;

}
