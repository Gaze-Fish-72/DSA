class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        string s="";
        for(int i=0;i<n;i++){
            if(command[i]=='G') s+=command[i];
            if(command[i]=='(' && command[i+1]==')') s+='o';
            if(command[i]=='(' && command[i+1]=='a') s+="al";
        }
        return s;
    }
};