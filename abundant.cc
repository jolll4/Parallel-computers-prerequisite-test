#include <iostream>
#include <sstream>

using namespace std;

int is_abundant(unsigned int num) {
   unsigned int sum = 0;
   for(unsigned int k = num-1; k>0; k--) {
       if(num%k==0){
           sum +=k;
       }
   }
   if(sum>num) { cout << num << "\n"; return 1;}
   else {return 0;}
}

int main(int argc, char* argv[]) {
    unsigned int max = 0;

    if (argc >=2) {
        istringstream iss( argv[1] );
        int n;
        if((iss >> n) && iss.eof()) {
            max = n;
        }
    }
    unsigned int count = 0;
    for (unsigned int i = 2; count < max; i++) {
         count += is_abundant(i);
    }
    return 0;
}

