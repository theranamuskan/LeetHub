class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int count=0;
        int index=0;
        while(startFuel<target){
            while(index<stations.size()&& stations[index][0]<=startFuel){ //storing fuel in our "pq" provided by gas stations
                pq.push(stations[index][1]); 
                index++;
            }
            if(pq.empty()) return -1;
            startFuel+=pq.top(); //max fuel in
            pq.pop();
            count++;
        }
        return count;
    }
};