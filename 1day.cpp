// ----------- max69no.-----//

class Solution {
public:
    int maximum69Number (int num) {
        string x = to_string(num);
        for(int i = 0 ; i < (int)x.size() ; i++) {
            if(x[i] == '6') {
                x[i] = '9';
                break;
            }
        }
        int ans = stoi(x);
        return ans;
    }
};

// ------ Parking System -----//

class ParkingSystem {
public:
int  B = 0;
int M = 0;
 int S = 0;
    ParkingSystem(int big, int medium, int small) {
        B = big;
        M = medium;
        S = small;
       

    }
    
    bool addCar(int carType) {
         if (carType== 1){
            B--;
            if(B>=0)return 1;
        }
          if (carType== 2){
            M--;
            if(M>=0)return 1;
        }
          if (carType== 3){
            S--;
            if(S>=0)return 1;
        }
        return 0;
    }
};

