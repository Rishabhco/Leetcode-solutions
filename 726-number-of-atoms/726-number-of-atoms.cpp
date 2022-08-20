class Solution {
public:
     bool isCap(char c) {
        return c >= 'A' && c <= 'Z';
    }
    
    bool isSml(char c) {
        return c >= 'a' && c <= 'z';
    }
    bool isDig(char c) {
        return c >= '0' && c <= '9';
    }
    
    int getReps(string s, int &i) {
        int r = 0;
        int n = s.size();
        
        if (i >= n || !isDig(s[i])) {
            return 1;
        }
        
        for (; i < n && isDig(s[i]); ++i) {
            r *= 10;
            r += (s[i]-'0');
        }
        
        return r;
    }
    
    map<string, int> getCounts(string &s) {
        int n = s.size();
        map<string, int> cnts;
        
        for (int i = 0; i < n; ) {
            if (isCap(s[i])) {
                string el;
                el.push_back(s[i++]);
                while (i < n && isSml(s[i])) el.push_back(s[i++]);
                
                int reps = getReps(s, i);
                cnts[el] += reps;
            }
            else if (s[i] == '(') {
                string tmp_str;
                int openBr = 1;
                ++i;
                
                for (; i < n && openBr > 0; ++i) {
                    if (s[i] == '(') {
                        tmp_str.push_back(s[i]);
                        ++openBr;
                    }
                    else if (s[i] == ')') {
                        if (--openBr) tmp_str.push_back(s[i]);
                    }
                    else {
                        tmp_str.push_back(s[i]);
                    }
                }
                map<string, int> tmp_cnts = getCounts(tmp_str);
                
                int reps = getReps(s, i);
                for (auto p : tmp_cnts) {
                    tmp_cnts[p.first] *= reps;
                }
                
                // merge tmp_cnts with cnts
                for (auto p : tmp_cnts) {
                    cnts[p.first] += p.second;
                }
            }
        }
        
        return cnts;
    }
    
    string countOfAtoms(string formula) {
        map<string, int> cnts = getCounts(formula);
        
        string ret;
        for (auto p : cnts) {
            ret += p.first;
            if (p.second > 1) ret += to_string(p.second);
        }
        return ret;
    }
};