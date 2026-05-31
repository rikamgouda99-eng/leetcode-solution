class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids)
    {
        long long M=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++)
        {
            if(M<asteroids[i])
            return false;
            M+=asteroids[i];
        }
        return M;
    }
};