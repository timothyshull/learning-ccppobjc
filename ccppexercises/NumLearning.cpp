//
//  main.cpp
//  CppWorkspace
//
//  Created by Tim on 11/19/14.
//  Copyright (c) 2014 TimShull. All Rights reserved.
//
#include <iostream>
#include <limits>
#include <math.h>
#include <cstdlib>
using namespace std;

double randRed(void);

void mypause();

struct point{
    double x;
    double y;
};

int main(){
    point newPoint = { randRed(), randRed() };
    while (cin.get()){
//            mypause();
            newPoint.x = randRed();
            newPoint.y = randRed();
            cout<<"Your point is: "<<newPoint.x<<", "<<newPoint.y<<endl;
    }
    return 0;
}

double randRed(void){
    double num = rand() % 1000000000;
    double den = 1000000000.0;
    double ret = num / den;
    return ret;
}

void mypause(){
    std::cout<<"Press [Enter] to continue . . .";
    std::cin.get();
}


//int main(){
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//    
//    if (number <= 0){
//        cout<<"Please enter an integer greater than 0";
//    }
//    else {
//        cout << "The factorial of " << number << " is ";
//        int accumulator = {1};
//        for(; number > 0; number-=1){
//            accumulator = accumulator * number;
//        }
//        cout << accumulator << ".\n";
//    }
//    return 0;
//}

//int main(){
//    int N;
//    
//    while (cin>>N){
//        if (N > 0 && (N%5)==0){
//            double g = N / 5;
//            cout<<g<<endl;
//        }
//        else {
//            if (N > 0){
//                continue;
//            }
//            else {
//                break;
//            }
//        }
//    }
//    return 0;
//}

//int main(){
//    int N;
//
//    while (cin>>N){
//        if (N > 0 && (N%5)==0){
//            double g = N / 5;
//            cout<<g<<endl;
//        }
//        else {
//            continue;
//        }
//    }
//    return 0;
//}

//int main () {
//    int N;
//    
//    while (cin>>N) {
//        (N>0 && (N%5)==0)?(cout<<((static_cast<double>(N))/5)<<endl):cout<<-1<<endl;
//    }
//}

//int main(){
//    int N;
//    
//    while (cin>>N){
//        if (N > 0 && (N%5)==0){
//            double g = N / 5;
//            cout<<g<<endl;
//        }
//        else {
//            cout<<-1<<endl;
//        }
//    }
//    return 0;
//}

//bool isPrime(int);
//
//int main(){
//    cout<<"Please enter an integer:"<<endl;
//    int N;
//    cin>>N;
//    int numPrimes = 0;
//
////    for (int i = 1; i <= N; i++){
////        if (isPrime(i)){
////            cout<<i<<"\n";
////        }
////    }
//
//    for (int i = 1; i <= N; i++){
//        if (isPrime(i) == true){
//            numPrimes++;
//        }
//    }
//    int primeList[numPrimes];
//    int j = 0;
//
//    for (int i = 0; i <= N; i++){
//        if (isPrime(i)){
//            primeList[j] = i;
//            j++;
//        }
//    }
//
//    for (int i = 1; i <= numPrimes; i++){
//            cout<<primeList[i]<<", ";
//    }
//
//    return 0;
//}
//
//bool isPrime(int n) {
//    if (n <= 3) {
//        if (n == 1){
//            return false;
//        }
//        else {
//            return true;
//        }
//    }
//    if (n % 2 == 0 || n % 3 == 0) {
//        return false;
//    }
//    for (int i = 5; i * i <= n; i += 6) {
//        if (n % i == 0 || n % (i + 2) == 0) {
//            return false;
//        }
//    }
//    return true;
//}


//int main(){
//    cout<<"Please enter the number of integers to be used:"<<endl;
//    int N;
//    cin>>N;
//
//    cout<<"Please enter a list of "<<N<<" integers:"<<endl;
//
//    int nList[N];
//    for (int i = 0; i < N; ++i){
//        int k;
//        cin>>k;
//        nList[i] = k;
//    }
//
//    double mean = 0.0;
//
//    for (int i = 0; i < N; ++i){
//        if (i != (N-1)) {
//            mean += nList[i];
//        }
//        else {
//            mean = (mean + nList[i]) / N;
//        }
//    }
//
//    cout<<"Your mean is: "<<mean<<endl;
//
//    int max = nList[0];
//
//    for (int i = 0; i < N; ++i){
//        if (nList[i] > max) {
//            max = nList[i];
//        }
//    }
//
//    cout<<"Your max is: "<<max<<endl;
//
//    int min = nList[0];
//
//    for (int i = 0; i < N; ++i){
//        if (nList[i] < min) {
//            max = nList[i];
//        }
//    }
//
//    cout<<"Your min is: "<<min<<endl;
//
//    cout<<"Your range is: "<<max-min<<endl;
//
//    return 0;
//}

//int main(){
//
//    char c = 'g';
//    char* a = &c;
//
//    int k = 1;
//    int* j = &k;
//
//    double f = 3.5;
//    double* h = &f;
//
//    cout<<c<<endl;
//    cout<<static_cast<void*>(&c)<<endl;
//    cout<<*a<<endl;
//    cout<<static_cast<void*>(a)<<endl;
//    cout<<k<<endl;
//    cout<<j<<endl;
//    cout<<f<<endl;
//    cout<<h<<endl;
//}

//int main(){
//
//    char c = 'g';
//    char* a = &c;
//
//    int k = 1;
//    int* j = &k;
//
//    double f = 3.5;
//    double* h = &f;
//
//    cout<<c<<endl;
//    cout<<static_cast<void*>(&c)<<endl;
//    cout<<*a<<endl;
//    cout<<static_cast<void*>(a)<<endl;
//    cout<<k<<endl;
//    cout<<j<<endl;
//    cout<<f<<endl;
//    cout<<h<<endl;
//}

//int main(){
//    cout<<"Enter an integer for iterations:\n";
//    int n;
//    cin>>n;
//
//    const char * c = "Hello, World!";
//
//    do {
//        cout<<c<<endl;
//        n--;
//    }
//    while (n > 0);
//}

//int main(){
//    cout<<"Enter an integer for iterations:\n";
//    int n;
//    cin>>n;
//
//    const char * c = "Hello, World!";
//
//    while (n > 0){
//        cout<<c<<endl;
//        n--;
//    }
//}

//int main(){
//    cout<<"Enter an integer for iterations:\n";
//    int n;
//    cin>>n;
//
//    const char * c = "Hello, World!";
//
//    for (int i = 0; i < n; ++i){
//        cout<<c<<endl;
//    }
//}

//int main(){
//    const char * c = "Hello, World!";
//    cout<<c<<endl;
//    return 0;
//}