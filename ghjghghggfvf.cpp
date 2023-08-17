class Soltuion{
public:
	int mostFrequent(vector<int>& nums, int key){
		for(int i=0;i<nums.length();i++){
			int target=0;
			int pos=0;
			if(nums[i]==key){
				target=nums[i+1];
				pos=i;
				break;
			}
		}
		int count=0;
		vector<int>v;
		for(int i=pos+1;i<nums.length();i++){
			if(nums[i]==target){
				count++;
			}
		}
	}
}