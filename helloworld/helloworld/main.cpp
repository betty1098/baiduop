//
//  main.cpp
//  helloworld
//
//  Created by zhaoxinyue on 14-9-12.
//  Copyright (c) 2014年 zhaoxinyue. All rights reserved.
//
#include<cstdio>
#include <iostream>
#include <string>
using namespace std;
void ReplaceBlank(char string[], int length){
    if(string == NULL||length<=0)
        return ;
    int originalLength = 0;
    int newLength = 0;
    int numOfBlanks=0;
    int i=0;
    while(string[i]!='\0'){
        originalLength ++;
        if (string[i] ==' ') {
            numOfBlanks ++;
        }
        i++;
    }
    cout << "originalLength" <<originalLength <<endl;
    cout << "numberofblanks" <<numOfBlanks <<endl;
    newLength = originalLength + numOfBlanks*2;
    if(newLength>length)
        return;
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    
    while(indexOfOriginal>=0 && indexOfNew >indexOfOriginal){
    if(string[indexOfOriginal]!=' ')
        string[indexOfNew--] = string[indexOfOriginal];
    else {
        string[indexOfNew--] ='0';
        string[indexOfNew--] ='2';
        string[indexOfNew--] = '%';
    }
        indexOfOriginal--;
    }
    
        
        
}
int main(int argc, const char * argv[])
{
    char* str= new char[50];
    gets(str);
    cout <<str<<endl;
    ReplaceBlank(str, 50);
    cout<<str;

    // insert code here...
   // cout << "Hello, World!\n";
    return 0;
}

