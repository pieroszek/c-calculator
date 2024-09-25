#include <iostream>

using namespace std;


int main(){

    int num1 = 9;
    int num2 = 8;
    string op = "*";

    int result = 0;

    if(op == "+"){
        result = num1 + num2;
        cout << "result: " << result << endl;
    }

    if(op == "-"){
        result = num1 - num2;
        cout << "result: " << result << endl;
    }

    if(op == "*"){
        int result = 0;
        for (size_t i = 0; i < num2; i++)
        {
            result = result + num1;
        }  

        cout << "result:" << result << endl; 
    }

    if(op == "/"){
        int q = 0;
        int j = 0;

        int remainder = num1;

        while(remainder >= num2){
            remainder -= num2;
            q++;
        }


        if(remainder != 0){

            for (size_t i = 0; i < 10; i++)
            {
                result = result + remainder;
            }  

            while(result >= num2){
                result -= num2;
                j++;
            }
        }

        cout << "result: " << q << "," << j << endl;

    }

    if(op == "^"){
        int i = 1;
        int sum = num1;
        while(i < num2){
            i++;
            sum += sum;
        }
        cout << "result: " << sum << endl;
    }

    if(op == "!"){
        result = 0;
        int p = 1;
        int j = num1;

        while(num1 - p != 1){
            int k = num1 - p;
            p++;

            for (size_t i = 0; i < k; i++)
            {
                result += j;
            }

            j = result;
            result = 0;
            
        }

        cout << "result: " << j << endl;
    }

    if(op == "sqr"){
        int sum = 0;
        int odd = 1;
        int count = 0;


        // uses k^2 property so 1^2 = 1 2^2 = 1+3 3^2 = 1+3+5 and so on 
        while(sum < num1){
            sum = sum + odd;
            odd = odd + 2;
            count++;
        }

        cout << "result: " << count << endl;


    }

    return 0;
}