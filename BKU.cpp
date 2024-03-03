#include <iostream>
#include <string>
#include<string.h>
#define MAXN 100
using namespace std;
bool check(const char *s1){
    int count=1;
    char preChar=s1[0];
    for(int i=1;i<strlen(s1);i++){
        if(s1[i]==preChar){
            count++;
        }
        else{
            count=1;
            preChar=s1[i];
        }
        if(count>2){
            return true;
        }
    }
    return false;
}
int position(const char *password){
    char previousChar = password[0];
    int Count = 1;
    int position = 0;
    for (int i = 1; i < strlen(password); i++) {
        if (password[i] == previousChar) {
            Count++;
            if (Count == 3) {
                position = i -2;
                break;
            }
        } else {
            previousChar = password[i];
            Count = 1;
        }
    }
    return position;
}
bool special(const char *password){
    for(int i=0;i<strlen(password);i++){
        if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%'){
            return false;
        }
    }
    return true;
}
// Task 4
int checkPassword(const char * s, const char * email) {
    // TODO: Complete this function
    char *se;
    int i=0;
    while(email[i]!='@'){
        se[i]=email[i];
        i++;
    }
    se[i]='\0';
    if(strlen(s)<8) return -1;
    if(strlen(s)>20) return -2;
    if(strstr(s,se)!=NULL){
        char *p=strstr(s,se);
        return (-300+s-p);
    }
    if(check(s)){
        return -(400+position(s));
    }
    if(special(s)){
        return -5;
    }
    for(int i=0;i<strlen(s);i++){
        if(!(s[i]>'a' && s[i]<'z') && !(s[i]>'A' && s[i]<'Z') && !(s[i]>'0' && s[i]<'9') && special(s)){
        return i;
        }
    }
    return -10;
}
// Task 5
int findCorrectPassword(const char * arr_pwds[], int num_pwds) {
    int maxcount = 0,maxsize=0;
    int index = 0;
    for (int i = 0; i < num_pwds; i++) {
        const char *temp = arr_pwds[i];
        int count = 1;
        int length = 0;

        for (int j = 0; temp[j] != '\0'; j++) {
            length++;
        }

        for (int j = i + 1; j < num_pwds; j++) {
            if (strcmp(arr_pwds[j],temp) == 0) {
                count++;
            }
        }
        if (count > maxcount || (count == maxcount && length > maxsize)) {
            maxcount = count;
            maxsize = length;
            index = i;
        }
    }

    return index;
}
int main() {
    char email[]="!dbVbgyv@%F";
    char PassWord[]="dbVb@outlook.com";
    int num=5;
    const char * arr[num]={"abcxyz","abcxyz","adddddd","addd","adddddd"};
    int result=findCorrectPassword(arr,num);
    cout<<result;
    return 0;
}
