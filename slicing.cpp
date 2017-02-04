#include <math.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<iostream>

using namespace std;
char* stringSliced(char* input1,int input2,int input3)
{
//char* output2;
string output1;
string i(input1);
output1=i.substr(input2,input3);
char* output2=(char*)output1.c_str();
return output2;
}
int main()
{
    char* output;
    char* ip1;
    ip1 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip1);
    int ip2;
    scanf("%d", &ip2);
    int ip3;
    scanf("%d", &ip3);
    output = stringSliced(ip1,ip2,ip3);
    printf("%s\n", output);
    return 0;
}
