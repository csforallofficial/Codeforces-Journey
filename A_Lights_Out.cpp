#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int ans[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            ans[i][j] = 1;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i==0 && j==0){
                if(mat[i][j]%2==0){
                    if((mat[i][j+1]+mat[i+1][j])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i][j+1]+mat[i+1][j])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }
            } else if(i==0 && j==1){        
                if(mat[i][j]%2==0){
                    if((mat[i][j-1]+mat[i+1][j]+mat[i][j+1])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i][j-1]+mat[i+1][j]+mat[i][j+1])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }
            } else if(i==0 && j==2){
                if(mat[i][j]%2==0){
                    if((mat[i][j-1]+mat[i+1][j])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i][j-1]+mat[i+1][j])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            } else if(i==1 && j==0){
                if(mat[i][j]%2==0){
                    if((mat[i-1][j]+mat[i][j+1]+mat[i+1][j])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i-1][j]+mat[i][j+1]+mat[i+1][j])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            } else if(i==1 && j==1){
                if(mat[i][j]%2==0){
                    if((mat[i][j-1]+mat[i+1][j]+mat[i][j+1]+mat[i-1][j])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i][j-1]+mat[i+1][j]+mat[i][j+1]+mat[i-1][j])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            } else if(i==1 && j==2){
                if(mat[i][j]%2==0){
                    if((mat[i-1][j]+mat[i][j-1]+mat[i+1][j])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i-1][j]+mat[i][j-1]+mat[i+1][j])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            } else if(i==2 && j==0){
                if(mat[i][j]%2==0){
                    if((mat[i-1][j]+mat[i][j+1])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i-1][j]+mat[i][j+1])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            } else if(i==2 && j==1){
                if(mat[i][j]%2==0){
                    if((mat[i-1][j]+mat[i][j+1]+mat[i][j-1])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i-1][j]+mat[i][j+1]+mat[i][j-1])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;    
                }   
            } else if(i==2 && j==2){
                if(mat[i][j]%2==0){
                    if((mat[i-1][j]+mat[i][j-1])%2==0)
                        ans[i][j] = 1;
                    else
                        ans[i][j] = 0;
                } else{
                    if((mat[i-1][j]+mat[i][j-1])%2==0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }   
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}