#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    string array[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
                "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen"
                "Nineteen","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    // we will get the word convertion in the array
    cout<<"Enter a whole number : ";
    cin>>number;
    //Now we set the condition
    if(number>=10000){
        int leftmostDigit = number/1000;//Here we only divide it by 1000
        cout<<array[leftmostDigit]<<" Thousand ";
        number-=leftmostDigit*1000;//We always returns the original value after taking the leftmost digit
    }
    if(number>=1000){
        int leftmostDigit = number/1000;
        cout<<array[leftmostDigit]<<" Thousand ";
        number-=leftmostDigit*1000;//We always returns the original value after taking the leftmost digit
    }
    if(number>=100){
        int leftmostDigit = number/100;
        cout<<array[leftmostDigit]<<" Hundred ";
        number-=leftmostDigit*100;//We always returns the original value after taking the leftmost digit
    }
    if(number>20){
        int leftmostDigit = number/10;//we need to get the left digit and make it as an array position
        cout<<array[17+leftmostDigit]<<" ";//This is for number 30 to 90
        number-=leftmostDigit*10;//This will return back the value
    }
    cout<<array[number];//This is for the numbers in the rightmost position or the one's values
    return 0;
}