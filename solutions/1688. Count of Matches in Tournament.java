class Solution {
    public int numberOfMatches(int n) {
        int matches=0;
        while(2<=n)
        {
            if(n%2==0)
                matches+=n/2;
            else
                matches+=n/2+1;
            n/=2;
        }
        return matches;
        
    }
}
