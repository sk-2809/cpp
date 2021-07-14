//You have two strings of lowercase English letters. You can perform two types of operations on the first string:

//Append a lowercase English letter to the end of the string.
//Delete the last character of the string. Performing this operation on an empty string results in an empty string.
//Given an integer, k, and two strings,s  and ,t determine whether or not you can convert  to  by performing exactly  of the above operations on . If it's possible, print Yes. Otherwise, print No.

/*Sample Input 0

hackerhappy
hackerrank
9
Sample Output 0

Yes*/

#include<simplecpp>
#include <bits/stdc++.h>

string appendAndDelete(string s, string t, int k) {
    if(s==t){

    }
int x= s.length();
int y= t.length();
char x1[x + 1];
char y1[y + 1];
int res= 0;
int result= 0;
strcpy(x1, s.c_str());
strcpy(y1, s.c_str());
if(x!=y){
    res=0;
}else{
    res=1;
}
if(res=1){
    for(int k=x-1; k>=0;k--){
        x1[k]=y1[k]
    }
}
int j=0;
while(x1=y1){
    j++;
}
return "j";
}

main_program{
//Write your code here
  ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
