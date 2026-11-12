class Solution {
  public:
  
    void toh(int n,int sour,int help,int dest){
        if(n==1){
            // cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
            return;
        }
        
        toh(n-1,sour,dest,help);
        // cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
        toh(n-1,help,sour,dest);
    }
    
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        toh(n,from,aux,to);
        return pow(2,n)-1;
    }
};