#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int check(string s){
    stack<int>st;
    for (int i=0;i<s.length();i++){
        if ('0'<=s[i]&&s[i]<='9') st.push(s[i]-'0');
        else if (s[i]==' ') continue;
        else if (!st.empty()){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            switch(s[i]){
                case '+': st.push(b+a);break;
                case '-': st.push(b-a);break;
                case '*': st.push(b*a);break;
                case '/': st.push(b/a);break;

            }
        }
    }
    int t;
    t=st.top();
    return t;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
		int ans=check(s);
       cout<<ans<<endl;

    }
}


