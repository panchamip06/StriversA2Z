class Solution{	
	public:
		int Factorial(int n){
            if(n==0)return 1;
            n=n*Factorial(n-1);
            return n;
		}
};